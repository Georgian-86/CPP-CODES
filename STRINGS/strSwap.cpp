#include <iostream>
#include <string>
using namespace std;

// You are given two strings s1 and s2 of equal length. A string swap is an 
// operation where you choose two indices in a string (not necessarily different) and 
// swap the characters at these indices

bool strSwap(string s1, string s2){
    int diffcount = 0;
    int diff1 = 0;
    int diff2 = 0;
    // we know at max we can have 2 diffs in s1 and s2 so we cont the no of differences in both strings first and set each diif in diif1 and diff2 respectively.
    
    for (int i=0; i<s1.length(); i++){
        if (s1[i]!=s2[i]){
            diffcount++;
            if (diffcount == 1){
                diff1 = i;
            }
            else if (diffcount == 2){
                diff2 = i;
            }
            if (diffcount>2){
                return false;
            }

        }
    }
    if (diffcount==0){
        return true;
    }
    else if(diffcount ==1){
        return false;
    }
    else{
        swap(s1[diff1],s1[diff2]);
        return s1 == s2;
    }
}

int main(){
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    cout << strSwap(s1,s2);
}
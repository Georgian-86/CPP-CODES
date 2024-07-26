#include <iostream>
#include <string>
using namespace std;

int vowelCount(string s){
    int count = 0;
    for (int i=0; i<s.length(); i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout << "Enter the string: " ;
    cin >> s;
    int vowel = vowelCount(s);
    cout << "No of vowels is: "<< vowel;
}
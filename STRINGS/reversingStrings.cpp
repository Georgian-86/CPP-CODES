#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    int start = 0;
    int end = s.length()-1;
    while (start < end){
        swap(s[start++], s[end--]);
    }
    return s;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string reversed = reverse(s);
    cout << "Reversed string: " << reversed << endl;
}
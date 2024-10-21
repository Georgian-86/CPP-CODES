#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str){
    stack<char> s;

    for (int i=0; i<str.size(); i++){
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if (s.empty()){
                return false;
            }

            int top = s.top();
            if (top == '(' && ch == ')' ||
                top == '{' && ch == '}' ||
                top == '[' && ch == ']'){
                    s.pop();
            }else{
                return false;
            }
        }
    }

    if (s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s1 = "({[]})";
    string s2 = "({[]}";
    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n<0){
        cout << "negative";
    }
    else if (n>0){
        cout << "positive";
    }
    else{
        cout << "zero";
    }
}
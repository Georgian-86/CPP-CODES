#include <iostream>
using namespace std;

int main(){

    int year;
    cin >> year;
    if ((year % 4 == 0) || (year % 400 == 0)){
        cout << "it is a lear year"<< endl;
    }
    else{
        cout << "it is not a lear year"<< endl;
    }
}
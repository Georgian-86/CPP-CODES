#include <iostream>
#include "compare.h"
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int maximum = max(a,b);
    int minimum = min(a,b);
    cout << "Maximum is " << maximum << endl;
    cout << "Minimum is " << minimum << endl;
}
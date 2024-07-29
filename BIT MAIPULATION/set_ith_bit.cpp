#include <iostream>
#include <math.h>
using namespace std;

int getITHbit(int number, int i){
    // int bitmask = pow(2,i);   this can also be done as 6 << 2 mean getting the 3rd bit which is 4(1 0 0)
    int bitmask = 1 << i;
    if ((number & bitmask) == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int setIthbit(int number, int i){
    int bitmask = 1 << i;
    return number | bitmask;
}

int main(){
    int number;
    cin >> number;
    int i;
    cin >> i;
    cout << getITHbit(number, i);
    cout << setIthbit(number, i);
}
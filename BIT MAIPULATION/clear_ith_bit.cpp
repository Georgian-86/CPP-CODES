#include <iostream>
using namespace std;

int clearIthbit(int num, int i){
    int bitmask = ~(1<<i);
    return num & bitmask;
}

int main(){
    int num;
    cin >> num;
    int i;
    cout << "Enter the position of the bit to be cleared: ";
    cin >> i;
    cout << "Number after clearing ith bit: " << clearIthbit(num, i);
}
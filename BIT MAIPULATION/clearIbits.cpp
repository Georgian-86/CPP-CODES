#include <iostream>
using namespace std;

void clearIbits(int num, int i){
    int bitmask = ~ (0) << i ;
    num = num & bitmask;
    cout << num << endl;
}

int main(){
    clearIbits(15, 2);
}
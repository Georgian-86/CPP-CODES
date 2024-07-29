#include <iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num = num & (~(1<<i));
    num = num | (val<<i);
    cout << num << endl;
}

int main(){
    int num = 7;
    int i = 3;
    int val = 1;
    updateIthBit(num, i, val);
}
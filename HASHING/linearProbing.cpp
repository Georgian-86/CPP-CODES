// You are using GCC
#include <iostream>
using namespace std;

int hashfunction(int key, int size){
    return (2*key+3)%size;
}

int main(){
    int k, size = 10;
    cin >> k;
    int hashtable[size];
    for (int i=0; i<size; i++){
        hashtable[i] = -1;
    }
    
    for (int i= 0; i<size; i++){
        int key;
        cin >> key;
        
        int index = hashfunction(key, size);
        if (hashtable[index] == -1)
            hashtable[index] = key;
        else{
            while (hashtable[index] != -1){
                index++;
                if (index == size)
                    index =0;
            }
            hashtable[index] = key;
        }
    }
    
    for (int i=0; i<size; i++){
        if (hashtable[i] != -1){
            cout << " \n Index " << i << " : key = " << hashtable[i];
        }
    }
    return 0;
}
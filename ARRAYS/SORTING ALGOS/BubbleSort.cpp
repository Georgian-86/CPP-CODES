#include <iostream>
using namespace std;

int print(int* arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubblesort(int* arr, int n){
    bool isSwap = false;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap){
            cout << "alreay sorted";
            return;
        }
    }

    print(arr, n);
}

int main(){
    int arr[]={3,1,4,2,5};
    int n=5;
    bubblesort(arr, n);
}
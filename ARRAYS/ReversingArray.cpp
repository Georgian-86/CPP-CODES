#include <iostream>
using namespace std;


int main(){
    int n;
    int arr[] = {5, 4, 3, 9, 2};
    n = sizeof(arr)/sizeof(int);
    // int copyarr[n];
    int leftptr  , rightptr ;
    while (leftptr <= rightptr){
        int temp;
        temp = arr[leftptr];
        arr[leftptr] = arr[rightptr];
        arr[rightptr] = temp;
        leftptr++;
        rightptr--;
    } 
    
    // for(int i = 0; i < n; i++){
    //     int j = n-i-1;
    //     copyarr[i] = arr[j];
    // }

    // for (int i =0; i<n; i++){
    //     arr[i]=copyarr[i];
    // }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


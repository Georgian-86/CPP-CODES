#include <iostream>
using namespace std;

int print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int countSort(int* arr, int n){
    int freq[100000];
    int minval = INT8_MAX, maxval = INT8_MIN;
    for (int i=0; i<n; i++){
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    for (int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for (int i=minval, j=0;  i<=maxval; i++){
        while (freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }

    print(arr, n);
}

int main(){
    int arr[5] = {3,1,4,2,5};
    int n = 5;
    countSort(arr, n);
}
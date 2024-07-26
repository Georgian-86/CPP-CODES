#include <iostream>
using namespace std;

int insertSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1; // curr = 3 prev 
        while ( prev >=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {3,1,5,2,4};
    int n = 5;
    insertSort(arr, n);
}
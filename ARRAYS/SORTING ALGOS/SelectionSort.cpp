#include <iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
}

void selectionSort(int *arr, int n){
    for (int i=0; i<n-1; i++){
        int min=i;
        for (int j=i; j<n; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
            
        }
        swap(arr[min],arr[i]);
        
    }

    print(arr, n);
}

int main(){
    int arr[] = {3,1,4,2,5};
    int n = 5;
    selectionSort(arr,n);
}
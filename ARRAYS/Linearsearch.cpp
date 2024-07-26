#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key);

int main(){
    int arr[100];
    int n;
    cout << "Enter n less 100" << endl;
    cin >> n;
    for (int i=0; i<n; i++){
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    
    int x;
    cout << "Enter x" << endl;
    cin >> x;
    // for (int i=0; i<n; i++){
    //     if (arr[i]==x){
    //         cout << "Found at index " << i << endl;
    //     }
    // }

    // return -1;
    int index = linearSearch(arr, n, x);
    if (index == -1){
        cout << "Not found" << endl;
        }
        else{
            cout << "Found at index " << index << endl;
        }
}

int linearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }

    return -1;    
}
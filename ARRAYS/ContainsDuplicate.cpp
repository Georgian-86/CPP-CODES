#include <iostream>
#include <vector>
using namespace std;

int containsDuplicate(int* arr, int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}


 int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = containsDuplicate(arr, n);
    if (result){
        cout << "array contains duplicate elements atlest once" << endl;
    }
    else{
        cout << "array does not contain duplicate elements" << endl;
    }



 }
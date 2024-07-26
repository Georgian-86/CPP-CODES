#include <iostream>
using namespace std;

int main(){

    int start=0, end, mid, key;
    int arr[]={2, 4, 6, 8, 10, 12, 14, 16};
    cin >> key;
    int n = sizeof(arr)/sizeof(arr[0]);
    end = n-1;
    while (start <= end){
        mid = (start + end) / 2;
        if (arr[mid] == key){
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if (key<arr[mid])
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << "Key not present" << endl;
    return -1;
}
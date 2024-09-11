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
// You are using GCC
// #include <iostream>
// using namespace std;

// int main(){

//     int n1; 
//     cin >> n1;
//     int n2;
//     cin >> n2; // corrected here
//     int arr1[n1];
//     int arr2[n2]; // corrected here
//     for (int i=0; i<n1; i++){
//         cin >> arr1[i];
//     }
//     for (int i=0; i<n2; i++){
//         cin >> arr2[i];
//     }
//     int min_len = (n1<n2)?n1:n2; // find the minimum length
//     for (int i=0; i<min_len; i++){
//         if ((arr1[i]>=0 && arr1[i]<=200) && (arr2[i]>=0 && arr2[i]<=200)){
//             cout << arr1[i]+arr2[i] << " ";
//         }
//         else{
//             cout << arr1[i] << " ";
//         }
//     }
//     // print remaining elements of the longer array
//     if (n1 > n2) {
//         for (int i=min_len; i<n1; i++) {
//             cout << arr1[i] << " ";
//         }
//     } else if (n2 > n1) {
//         for (int i=min_len; i<n2; i++) {
//             cout << arr2[i] << " ";
//         }
//     }
//     return 0;
// }


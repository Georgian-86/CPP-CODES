#include <iostream>
using namespace std;

int subarraysum(int *arr, int n){
    int maxsum = INT8_MIN;
    int currsum = 0;
    for(int i = 0; i < n; i++){
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if (currsum <0){
            currsum = 0;
        }
    }
    cout << "Max subarray sum is: " << maxsum;
}

int main(){
    int arr[]={2, -3, 6, -5, 4, 2};
    int n = 6;
    subarraysum(arr,n);
}
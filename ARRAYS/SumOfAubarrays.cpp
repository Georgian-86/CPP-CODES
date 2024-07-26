#include <iostream>
using namespace std;

int subarraysum(int *arr, int n){
    int maxsum = INT8_MIN;
    for (int start=0; start<n; start++){
        for (int end=start; end<n; end++){
            int currsum =0;
            for (int i=start; i<=end; i++){
                currsum+=arr[i];
            }
            cout << currsum << ", ";
            maxsum = max(currsum, maxsum);
        }
        cout << endl;
    }
    cout << "Maximum subarray sum is: " << maxsum;
}

int subarraysum2(int *arr, int n){
    int maxsum = INT8_MIN;
    for (int start=0; start<n; start++){
        int currsum =0;
        for (int end=start; end<n; end++){
            currsum += arr[end];
            maxsum = max(currsum, maxsum);
        }
        cout << endl;
    }
    cout << "Maximum subarray sum is: " << maxsum;
}

int main(){
    int arr[]={2, -3, 6, -5, 4, 2};
    int n = 6;
    subarraysum(arr,n);
}
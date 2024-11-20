#include <iostream>
#include <vector>
using namespace std;

int ans(vector<int> arr, int n){
    int count=0;
    for (int i=0; i<=n; i++){
        int max =0;
            if (arr[i] > arr[max]){
                max = arr[i+1];
                count ++;
            }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> v1(n);
    
    for (int i=0; i<n; i++){
        int inp;
        cin>> inp;
        v1[i]=inp;
    }
    cout << ans(v1, n);
}
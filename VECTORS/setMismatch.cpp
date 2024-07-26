#include <iostream>
#include <vector>
using namespace std;

vector<int> setMismatch(vector<int> v, int n){
    vector<int> ans(2);
    int start = 0;
    int end = n-1;
    int count =0;
    while (start < end){
        if (v[start] == v[start + 1]){
            ans[0] = v[start];
            ans[1] = v[start]+1;
            start+=2;
        } else {
            start++;
        }

    }

    return ans;
}

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2);
        vector<int> count(n + 1, 0);
        
        // Count occurrences of each number
        for (int num : nums) {
            count[num]++;
        }
        
        // Find the duplicate and missing numbers
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                result[0] = i; // Duplicate number
            } else if (count[i] == 0) {
                result[1] = i; // Missing number
            }
        }
        
        return result;
    }
};

int main(){
    int arr[] = {1,2,3,4,5,6,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    vector<int> result = setMismatch(v,n);
    for (int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    
}
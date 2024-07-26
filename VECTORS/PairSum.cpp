#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector <int> v;

    for (int i=0; i<size; i++){
        int ele;
        cout << "Enter element: ";
        cin >> ele;
        v.push_back(ele);
    }

    int sum;
    cout << "Enter required sum: " ;
    cin >> sum;
    int start = 0;
    int end = v.size()-1;
    while (start < end){
        if (v[start] + v[end] == sum){
            cout << "Pair found: " << v[start] << " " << v[end] <<
            endl;
            return true;
        }
        else if (v[start]+v[end]>sum) {
            end--;
        }
        else{
            start++;
        }
    }

    return false;
}
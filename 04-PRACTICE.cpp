#include <iostream>
#include <vector>
using namespace std;

// We have to find the occurance index of last x in the array

int main(){
    cout << "Enter the size of array: " << endl;
    int n;
    cin >> n;
    vector <int> v;
    cout << "Enter the array elements: " << endl;
    for(int i = 0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int x;
    cout << "Enter the elenent whose last occurance is to be known: " << endl;
    cin >> x;
    int occurance = -1;
    // Traversing from left
    // for(int i=0; i<n; i++){
    //     if(v[i] == x){
    //         occurance = i;
    //     }
    // }

    // Traversing from right
    for (int i=v.size()-1;i>=0;i--){
        if(v[i] == x){
            occurance = i;
            break;
        }
    }


    cout << "Last index: " << occurance << " Last position: " << occurance+1 << endl;

    return 0;

}


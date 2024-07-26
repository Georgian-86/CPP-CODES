#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x, n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    vector <int> v;
    cout << "Enter the elements of array" << endl;
    for (int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Enter the sum: " << endl;
    cin >> x;

    int count = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "The pair is: " << v[i] << " " << v[j] << endl;
                count ++;
            }
        }
    }

    cout << "Total no of pairs is: " << count << endl;

}
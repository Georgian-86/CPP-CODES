#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <vector<int>> mat = {{1,2,3},
                             {4,5,6},
                             {7,8,9}};
    for (int i=0; i<mat.size(); i++){
        for (int j=0; j<mat[0].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
}
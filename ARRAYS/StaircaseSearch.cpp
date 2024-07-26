#include <iostream>
using namespace std;

int staircaseSearch(int mat[][4], int n, int m, int key){
    int j = m-1;
    int i = 0;
    while(i < n && j >=0){
        if(mat[i][j] == key){
            cout << "found at :" << i << j << endl;
            return true;
        }
        else if(mat[i][j] < key){
            i++;
        }
        else {
            j--;
        }
    }

    cout << "key not found" << endl;
    return false;


}

int main(){
    int mat[4][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    int n=4;
    int m = 4;
    int key = 13;
    staircaseSearch(mat, 4, 4, 8);
}

// #include <iostream>
// using namespace std;

// int staircaseSearch(int mat[][4], int n, int m, int key){
//     int start = m-1;
//     int end = 0;
//     while(end < n && start >=0){
//         if(mat[end][start] == key){
//             cout << "Found at: (" << end << ", " << start << ")" << endl;
//             return true;
//         }
//         else if(key > mat[end][start]){
//             end++;
//         }
//         else {
//             start--;
//         }
//     }

//     cout << "Key not found" << endl;
//     return false;
// }

// int main(){
//     int mat[4][4]={{1,2,3,4},
//                   {5,6,7,8},
//                   {9,10,11,12},
//                   {13,14,15,16}};
//     int n=4;
//     int m = 4;
//     int key = 13;
//     staircaseSearch(mat, n, m, key);
//     return 0;
// }
#include <iostream>
using namespace std;

int spiralMatrix(int mat[4][4], int n, int m){
    int top, down, left, right;
    top = 0;
    left=0;
    down = n-1;
    right = m-1;
    while (top<=down && left<=right){

        //  for top row
        for (int i=top; i<=right; i++){
            cout<<mat[top][i]<<" ";
        }

        // for right
        for (int i=top+1; i<=down; i++){
            cout<<mat[i][right] << " ";
        }

        // for bottom
        for (int i=right-1; i>=left; i--){
            cout<<mat[down][i]<<" ";
        }

        // for left
        for (int i=down-1; i>=top+1; i--){
            cout<<mat[i][left]<<" ";
        }

        right--;
        top++;
        down--;
        left++;


    }

}


int main(){
    int mat[4][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    int n=4;
    int m = 4;
    spiralMatrix(mat, n, m);
}


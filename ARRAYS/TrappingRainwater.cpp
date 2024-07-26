#include <iostream>
using namespace std;

int watertrapped(int* height, int n){
    int leftmax[100000];
    int rightmax[100000];
    leftmax[0]=height[0];
    rightmax[n-1]=INT8_MIN;
    for (int i=1; i<n; i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
    }

    for (int i=n-2; i>0; i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }

    int watertrapped =0;
    for (int i=0; i<n; i++){
        int currwater = min(leftmax[i],rightmax[i]) - height[i];
        if (currwater>0){
            watertrapped+=currwater;
        }
    }
    cout << "water trapped is: " << watertrapped;
    cout << endl;
}


int main(){
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(height[0]);
    watertrapped(height, n);
}
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9};
    ofstream outfile;
    outfile.open("output.txt");
    for (int i=0; i<10; i++){
        outfile << arr[i] << " ";
    }
    outfile.close();
}


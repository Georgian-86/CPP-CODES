#include <iostream>
using namespace std;

// fibonacci number
int fibo(int n){
    if (n==0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fibo(n-1)+fibo(n-2);
    }
    }

int primeornot(int n){
    int count = 0;
    if (n<2){
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    for (int i=1; i<=n; i++){
        if (n%i==0){
            count ++;
        }
    }
    if (count == 2){
        cout << n<< " is prime" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }

}

int main(){
    // Largest among 3 nums
    // int a;
    // int b;
    // int c;
    // cin >> a >> b >> c;
    // if (a>b && a>c){
    //     cout << "Largest is a" << endl;
    // }
    // else if(b>a && b>>c){
    //     cout << "Largest is b" << endl;
    // }
    // else{
    //     cout << "Largest is c";
    // }


    // Prime numbers
    int n; 
    cin >> n;
    primeornot(n);
    cout << fibo(5);

    
}
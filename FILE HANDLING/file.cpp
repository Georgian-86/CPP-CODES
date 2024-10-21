// // read n space separated string from a file and store them in a int array.
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     ofstream in;
//     in.open("output.txt");
//     string s;
//     getline(in, s);
//     int n;
//     int arr[10];
//     int i = 0;
//     while (n && i<10){
//         in << n << " ";
//         arr[i] = n;
//         i>>n;
//         i++;
//     }
//     in.close();
//     for (int i=0; i<10; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;


// }
#include<iostream>
#include<fstream>

using namespace std;

class complex_number{
    public:
    int x;
    int y;

complex_number(){}
complex_number(int a,int b){
    x=a;
    y=b;
}
void print()
{
cout<<x<<"+i"<<y;
}

complex_number operator+(complex_number &c){
    complex_number m;

    m.x= x + c.x;
    m.y= y + c.y;

    return m;
}

void operator<<(const complex_number& c) {
        cout  << c.x << "+i" << c.y;
    }


};

int main()
{
    complex_number c1(2,4),c2(6,7);

    complex_number c3= c1 + c2;

    c3.print();
    cout << c1;
}
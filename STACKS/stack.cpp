#include <iostream>
using namespace std;

// Stack using array
class stack{
    int *arr;
    int top;
    int capacity;

public:
    stack(int size)
    {
        arr = new int[size];
        top = -1;
        capacity = size;
    }

    void push(int element)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = element;
    }
};


#include <iostream>
using namespace std;

class Stack{
    int* arr;
    int currSize;
    int capacity;
    int top;
public:
    Stack(int size){
        arr = new int[size];
        currSize = 0;
        capacity = size;
        top = -1;
    }

    void push(int val){
        if (top = capacity -1 ){
            cout << "Stack is full" << endl;
        }
    }

    void pop(){

    }

    int top(){

    }

    bool isEmpty(){

    }

};

int main(){

}
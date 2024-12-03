#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void maxHeapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if( left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n){
    for(int i = n / 2 - 1; i>=0; i--){
        maxHeapify(arr, n, i);
    }
    
}
void insert(int arr[], int &n, int value){
    arr[n] = value;
    n++;
    int i = n - 1;
    while(i > 0 && arr[(i - 1) / 2] < arr[i]){
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
    
}
void deleteRoot(int arr[], int &n){
    arr[0] = arr [n-1];
    n--;
    maxHeapify(arr, n, 0);
}
void heapSort(int arr[], int n) {
    // Build a max heap
    buildMaxHeap(arr, n);

    // Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move the current root to the end
        swap(arr[0], arr[i]);

        // Call maxHeapify on the reduced heap
        maxHeapify(arr, i, 0);
    }
}
int main() {
    int arr[100];   // Array to store the heap
    int n = 0;      // Current size of the heap

    // Insert elements into the max heap
    insert(arr, n, 20);
    insert(arr, n, 15);
    insert(arr, n, 30);
    insert(arr, n, 40);

    // Build max heap (optional if elements are inserted randomly in an array)
    buildMaxHeap(arr, n);

    // Print the max heap
    cout << "Max-Heap elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    deleteRoot(arr , n);
    
    cout << "Max-Heap elements after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
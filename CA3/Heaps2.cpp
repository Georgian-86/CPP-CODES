// #include <iostream>
// using namespace std;

// class Heap{
// public:
//     int arr[100];
//     int size;

//     Heap(){
//         size = 0;
//         arr[0] = -1;
//     }

//     void insert(int val){
//         size = size+1;
//         int index= size;
//         arr[index] = val;
//         while (index > 1){
//             int parent = index/2;
//             if (arr[parent] < arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }else {
//                 break;
//             }
//         }
        
//     }

//     void deleteFromHeap(){
//         if (size == 0){
//             cout << "Heap is empty" << endl;
//             return;
//         }

//         arr[1] = arr[size];
//         size--;

//         int i=1;
//         while (i<= size){
//             int left = 2*i;
//             int right = 2*i + 1;
//         }
//     }

//     void print(){
//         for (int i = 1; i <= size; i++){
//             cout << arr[i] << " ";
//         }
//     }
// };

// int main(){
//     Heap h;

//     h.insert(10);
//     h.insert(20);
//     h.insert(15);
//     h.insert(5);
//     h.print();
// }

#include <iostream>
using namespace std;

// Function to maintain the heap property for a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int smallest = i;         // Initialize smallest as root
    int left = 2 * i + 1;     // Left child index
    int right = 2 * i + 2;    // Right child index

    // If left child is smaller than root
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    // If right child is smaller than smallest so far
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    // If smallest is not root, swap and continue heapifying
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest); // Recursively heapify the affected subtree
    }
}

// Function to build a Min Heap from an unsorted array
void buildMinHeap(int arr[], int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Function to delete the minimum element (root) from the heap
void deleteMin(int arr[], int& n) {
    if (n <= 0) {
        cout << "Heap is empty!" << endl;
        return;
    }

    // Replace the root with the last element
    arr[0] = arr[n - 1];
    n--; // Reduce the heap size

    // Heapify the root to restore the heap property
    heapify(arr, n, 0);
}

// Function to display the heap elements
void displayHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Number of elements in the array
    int arr[n]; // The heap array
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements into the array
    }
    
    buildMinHeap(arr, n); // Build the Min Heap
    displayHeap(arr, n); // Display the heap elements
    deleteMin(arr, n);    // Delete the minimum element (root)
    displayHeap(arr, n);  // Display the current heap
    
    return 0;
}
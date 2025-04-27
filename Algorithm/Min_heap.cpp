//Thank you Arif sir
#include <iostream>  // For input/output operations
#include <vector>    // For dynamic array handling
using namespace std;

#define MAX 100  // Maximum size of the heap

// creating MinHeap class
class MinHeap {
private:
    int arr[MAX];  // Array to store heap elements
    int Size;      // Current size of the heap
public:
    // Constructor to initialize the heap size
    MinHeap() {
        Size = 0;
    }

    // Function to heapify upwards 
    void HeapUp(int i) {
        while (i > 0 && arr[i] < arr[(i - 1) / 2]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    // Function to insert an element into the heap
    void Insert(int data) {
        if (Size == MAX) {
            cout << "Heap is full" << endl;
            return;
        }
        arr[Size] = data;   // Place the new data at the end
        HeapUp(Size);        // Heapify upwards to maintain the min-heap property
        Size++;              // Increase the heap size
        cout << data << " was inserted." << endl;
    }

    // Function to heapify downwards 
    void HeapDown(int i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;

        // If left child is smaller than current node
        if (left < Size && arr[left] < arr[smallest]) {
            smallest = left;
        }
        // If right child is smaller than current node
        if (right < Size && arr[right] < arr[smallest]) {
            smallest = right;
        }
        // If the smallest value is not the current node, swap and heapify downwards
        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            HeapDown(smallest);  // Recursively heapify the affected subtree
        }
    }

    // Function to delete the root element (the minimum element)
    void Delete() {
        if (Size == 0) {
            cout << "Heap is empty!!" << endl;
            return;
        }
        cout << arr[0] << " deleted from the heap." << endl;
        arr[0] = arr[Size - 1];  // Replace root with the last element
        Size--;                   // Decrease heap size
        HeapDown(0);              // Heapify from the root to restore the heap property
    }

    // Function to display the heap elements
    void display() {
        if (Size == 0) {
            cout << "The heap is empty." << endl;
            return;
        }
        cout << "Heap elements: ";
        for (int i = 0; i < Size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to perform heap sort
    void heapSort() {
        // First, build the heap
        for (int i = Size / 2 - 1; i >= 0; i--) {
            HeapDown(i);  // Build the heap by heapifying each node starting from the last non-leaf
        }
        
        // Repeatedly extract the root (smallest element) and place it at the end
        int originalSize = Size;
        while (Size > 1) {
            swap(arr[0], arr[Size - 1]);  // Move the root to the end of the array
            Size--;  // Decrease heap size
            HeapDown(0);  // Restore heap property for the remaining elements
        }
    
        // After heap sort, the heap is sorted, display the sorted array
        cout << "Sorted elements in ascending order: ";
        for (int i = 0; i < originalSize; i++) {
            cout << arr[originalSize-i-1] << " ";  // Print sorted elements
        }
        Size = originalSize; // restore original size for further operation
        cout << endl;
    }
    
};

// Main function to interact with the heap
int main() {
    MinHeap mh;  // Create a MinHeap object
    int a;
    cout << "Enter 5 elements to insert into the heap: ";
    for (int i = 0; i < 5; i++) {
        cin >> a;
        mh.Insert(a);  // Insert elements into the heap
    }
    mh.display();  // Display the current state of the heap

    int choice, data;
    do {
        // Display menu options
        cout << "1. Insert\n2. Delete\n3. Display\n4. Heap Sort\n5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // create switch to handle multiple cases
        switch (choice) {
            case 1:
                cout << "Enter the data: ";
                cin >> data;
                mh.Insert(data);  // Insert a new element
                break;
            case 2:
                mh.Delete();  // Delete the root element
                break;
            case 3:
                mh.display();  // Display the heap
                break;
            case 4:
                mh.heapSort();  // Perform heap sort
                break;
            case 5:
                cout << "Exiting Program.." << endl;
                break;
            default:
                cout << "Invalid Input!!" << endl;
        }
    } while (choice != 5);

    return 0;
}

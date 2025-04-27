#include <iostream> // For input/output operations
#include <vector> // For dynamic array handling
using namespace std; 

// Function to heapify a subtree rooted at index i
void heapify(vector<int> &arr ,int n , int i){

    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[i] , arr[largest]);
        heapify(arr , n , largest);
    }
    return;
}
// function to sort a array
void Heap_Sort(vector<int> &arr , int n ){

    // build a max heap
    for(int i = n/2 -1 ; i >= 0 ; i--){
        heapify(arr , n , i);
    }

    //Extract all elements from the heap
    for(int i = n-1 ; i >= 0 ; i--){
        swap(arr[0] , arr[i]);
        heapify(arr , i , 0);
    }
    return;

}
// main function
int main(){
    int n;
    cout << "Size of the array: "; // promt user for the array size 
    cin >> n; // read the array size 

    vector<int> arr(n); // declare a dynamic vector
    cout << "Enter the elements: "; // promt user for the array elements
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; // read the elements
    }

    Heap_Sort(arr,n); //function call 
    
    cout << "Sorted elements: "; 
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " "; //print sorted elements
    }
    cout << endl; // create a newline 
}

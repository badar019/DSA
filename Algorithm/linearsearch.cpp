#include<bits/stdc++.h> // including all standard libraries
using namespace std; // using standard namespace
// Function to perform binary search on a sorted array
int main(){
    int n; // declaring n variable to store the size of the dynamic array
    cout << "Enter the size of the array: ";
    // Taking input for the size of the array
    cin >> n;
    cout << "Enter the key value: ";
    int key; // declaring key variable to store the value to be searched
    // Taking input for the key value
    cin >> key;

    cout << "Enter the elements of the array: ";
    vector<int> arr(n); // Using vector for dynamic array size
    for(int i=0;i<n;i++){ //for loop to take input of array elements
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];// taking input of array elements
    }
    cout << endl; // printing new line
    for(int i=0;i<n;i++){// for loop to search the key in the array
        if(arr[i] == key){ 
            cout << "Key found at index: " << i << endl; // if key is found in the array, print the index
            
        }
    }
    cout << "Key not found in the array." << endl; // if key is not found in the array
    return 0; // returning 0 to indicate successful execution of the program
}
/* This code implements a linear search algorithm to find the index of a given key in an array. 
It takes the size of the array and the key as input from the user, and then searches for the key in the array.
 If found, it prints the index; otherwise, it indicates that the key was not found.
 The code uses a vector to handle dynamic array size and include all standard libraries for ease of use. 
 The program is simple and efficient for small arrays, but may not be optimal for larger datasets compared
  to more advanced search algorithms like binary search or hash tables.
 The code is well-structured and easy to understand, making it suitable for educational purposes and basic search operations in C++.
 The code is a simple implementation of linear search algorithm in C++.
  It takes the size of the array and the key value as input from the user, and then searches for the key in the array. If found, it prints the index; otherwise, it indicates that the key was not found. The code uses a vector to handle dynamic array size and includes all standard libraries for ease of use. The program is simple and efficient for small arrays, but may not be optimal for larger datasets compared to more advanced search algorithms like binary search or hash tables. The code is well-structured and easy to understand, making it suitable for educational purposes and basic search operations in C++.
 Time complexity of the linear search algorithm is O(n), where n is the number of elements in the array. 
 This means that in the worst case, the algorithm will have to check every element in the array before finding the key or concluding that it is not present. 
 The space complexity is O(1) since it uses a constant amount of extra space regardless of the input size.*/

#include <bits/stdc++.h> //include all standard libraries
using namespace std;     // use standard namespace
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; // input size of the array

    vector<int> arr(n); // create a vector of size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input elements of the array
    }
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;               // input target element to search
    int left = 0, right = n - 1; // initialize left and right pointers
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // calculate mid index
        if (arr[mid] == target)
        {
            cout << "Element found at index " << mid << endl; // if the element is found
            return 0;                                         // exit the program
        }
        if (arr[mid] < target)
        {
            left = mid + 1; // move left pointer to mid+1 if target is greater than mid element
        }
        else
        {
            right = mid - 1; // move right pointer to mid-1 if target is less than mid element
        }
    }
    cout << "Element not found in the array" << endl; // if the element is not found
    return 0;                                         // exit the program
}
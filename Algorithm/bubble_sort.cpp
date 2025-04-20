#include <bits/stdc++.h> //include all standard libraries
using namespace std;     // use standard namespace
void bubblesort(vector<int> &arr)
{
    int n = arr.size(); // get the size of the array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {                             // compare adjacent elements
                swap(arr[j], arr[j + 1]); // swap if they are in wrong order
            }
        }
    }
    return; // return from the function
}
int main()
{
    int n;                                       // declare variable n
    cout << "Enter the size of the array: ";     // prompt user for input
    cin >> n;                                    // input size of the array
    vector<int> arr(n);                          // create a vector of size n
    cout << "Enter the elements of the array: "; // prompt user for input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input elements of the array
    }
    bubblesort(arr);          // call the bubblesort function to sort the array
    cout << "Sorted array: "; // prompt user for output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // output sorted array
    }
    cout << endl; // output new line
    return 0;     // exit the program
}
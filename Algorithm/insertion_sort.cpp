#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    return;
}
int main()
{
    vector<int> arr = {2, 222, 220, 8, 2222, 1, 87, 3, 44, 22, 9, 99, 7, 92, 11, 4};
    Insertion_Sort(arr);
    int n = arr.size();
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
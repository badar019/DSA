#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
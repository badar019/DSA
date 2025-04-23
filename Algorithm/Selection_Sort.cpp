#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    return ;
}
int main(){
    vector<int> arr = {2, 222, 220, 8, 2222, 1, 87, 3, 44, 22, 9, 99, 7, 92, 11, 4};
    Selection_Sort(arr);
    int n = arr.size();
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
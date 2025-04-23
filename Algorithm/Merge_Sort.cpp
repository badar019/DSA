#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &arr, int left ,int mid , int right ){
    int i = left,j= mid+1;
    
    vector<int> temp;
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= right)
        temp.push_back(arr[j++]);
    for(int x=left;x<=right;x++){
        arr[x]=temp[x-left];
    }
}
void Merge_Sort(vector<int>&arr , int left , int right){
    if(left<right){
        int mid = left + (right -left ) / 2;
        Merge_Sort(arr , left , mid);
        Merge_Sort(arr , mid+1 , right);
        Merge(arr , left , mid , right);
    }

}
int main(){
    vector<int> arr = {2, 222, 220, 8, 2222, 1, 87, 3, 44, 22, 9, 99, 7, 92, 11, 4};
    Merge_Sort(arr,0,arr.size()-1);
    int n = arr.size();
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
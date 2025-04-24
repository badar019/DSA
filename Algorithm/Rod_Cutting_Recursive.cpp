// Rod_Cutting recursive naive approach
#include<bits/stdc++.h>
using namespace std;
int rodcuttingRecursive(vector<int> &price , int n){
    int max_val = INT_MIN;
    if(n<=0) return 0;
    for(int i = 0 ; i < n ; i++){
        max_val = max( max_val , price[i] + rodcuttingRecursive(price , n-i-1));
    }
    return max_val;
}
int main() {
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();

    cout << "Max Value (Recursive): " << rodcuttingRecursive(price, n) << endl;
    return 0;
}
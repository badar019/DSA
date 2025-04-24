// Memoization (Top_Down )
#include<bits/stdc++.h>
using namespace std;
int RodCutting_Memo(vector<int> &price , int n , vector<int> &dp){
    if(n <= 0) return 0;
    if(dp[n] != -1) return dp[n];

    int max_val = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        max_val = max( max_val , price[i] + RodCutting_Memo(price , n-i-1 , dp));
    }
    dp[n] = max_val;
    return dp[n] ;
}
int main() {
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();

    vector<int> dp(n+1 , -1);

    cout << "Max Value (Memoization): " << RodCutting_Memo(price, n , dp) << endl;
    return 0;
}
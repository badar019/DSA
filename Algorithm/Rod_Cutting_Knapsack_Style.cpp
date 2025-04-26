// 2D DP (Unbounded Knapsack Style)
#include<bits/stdc++.h> // header file for all  standard library
using namespace std; // using standard namespace
int rodcutting2D( vector<int> &price , int n){
    vector<vector<int>> dp( n+1 , vector(n+1 , 0));
    for(int i = 1 ; i <= n ; i++){ 
        for(int len = 1 ; len <= n ; len++){
            if(i<=len){
                dp[i][len] = max(dp[i-1][len] , price[i-1] + dp[len-i][len]);
            }
            else{
                dp[i][len] = dp[i-1][len];
            }
        }
    }
    return dp[n][n];
}
int main() {
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();

    cout << "Max Value (Knapsack style): " << rodcutting2D(price, n) << endl;
    return 0;
}
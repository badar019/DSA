// Bottom_up (Tabulation) method
#include<bits/stdc++.h>
using namespace std;

int RodCutting_Tabulation(vector<int> &price , int n){
    vector<int> dp(n+1,0); // declare a dynamic array
    for(int len = 1 ; len <= n ; len++){
        for(int j = 1 ; j <= len ; j++){
            dp[len] = max(dp[len] , price[j-1] + dp[len-j]);
        }
    }
    return dp[n]; //return nth index,because maximum value in nth index
}
int main(){
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();

    cout << "Max Value (Tabulation): " << RodCutting_Tabulation(price, n) << endl;
    return 0;
}
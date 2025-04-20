#include <bits/stdc++.h> // include all standard library
using namespace std;     // use standard namespace

int knapsack(int W, vector<int> &weights, vector<int> &values, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0)); // create a 2D vector of (n+1)x(W+1)
    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (weights[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}
int main()
{
    vector<int> weights = {2, 3, 4, 5};
    vector<int> values = {3, 4, 5, 6};
    int n = weights.size();
    int W = 5;
    cout << "Max value is " << knapsack(W, weights, values, n) << endl;
}
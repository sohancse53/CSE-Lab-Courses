#include<bits/stdc++.h>
using namespace std;

int knapSack(int values[], int weights[], int W,int n) {

    int dp[n + 1][W + 1];


    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = 0;
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (weights[i - 1] <= j) {

                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            } else {

                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][W];
}
int main() {
    int values[] = {3, 5, 6, 10};
    int weights[] = {1, 2, 3, 5};
    int n=sizeof(values)/sizeof(values[0]);
   //capacity is 6
    int W = 6;
    cout<<"maximum  profit: ";
    cout << knapSack(values, weights, W,n);
    return 0;
}

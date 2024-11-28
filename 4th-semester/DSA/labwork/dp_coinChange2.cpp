#include<bits/stdc++.h>
using namespace std;

int coinChange2(int coins[],  int amount) {
    int dp[amount + 1] = {0};
    dp[0] = 1;


    for (int i = 0; i < coins[i]; i++) {

        for (int j = coins[i]; j <= amount; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }
    for(int i=0;i<amount;i++){
        cout<<dp[i]<<" ";
    }

    return dp[amount];
}

int main() {
    int arr[3] = {2, 3, 5};


    cout << coinChange2(arr, 10);
    return 0;
}

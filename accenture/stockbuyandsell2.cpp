
#include<bits/stdc++.h>
using namespace std;
/*
122. Best Time to Buy and Sell Stock II
Medium
Topics
Companies
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum pro1,fit you can achieve.



Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.
Example 2:

Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Total profit is 4.
Example 3:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.


Constraints:

1 <= prices.length <= 3 * 104
0 <= prices[i] <= 104

*/

int solve(int inde , bool flag , vector<int>&arr , int ans, int n, vector<vector<int>>&dp ) {

    if (inde == n ) {
        return 0;
    }


    if (dp[inde][flag] != -1) {

        return dp[inde][flag];
    }
    if (flag) {

        dp[inde][flag]  = max(-arr[inde] + solve(inde + 1, false, arr, ans, n, dp), 0 + solve(inde + 1, true, arr, ans, n, dp));




    }

    else {


        dp[inde][flag]  = max(arr[inde] + solve(inde + 1, true, arr, ans, n, dp), 0 + solve(inde + 1, false, arr, ans, n, dp));

    }

    return dp[inde][flag];

}

int main() {

#ifndef ONLINE_JUDGE


    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif




    int n ;
    vector<int> arr;
    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        int ele ;
        cin >> ele;
        arr.push_back(ele);
    }
    vector<vector<int>>dp(n + 1, vector<int>(2, -1));
    int ans = solve(0, true, arr, 0, arr.size(), dp);

    cout << ans << endl;




}
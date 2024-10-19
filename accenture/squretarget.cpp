

#include<bits/stdc++.h>
using namespace std;

int solve(int n , int inde, vector<int>&arr, vector<vector<int>>&dp ) {

	if (n == 0)return 0;
	if (inde >= arr.size()) return INT_MAX - 1;

	if (n < 0) return INT_MAX - 1;
	if (dp[inde][n]  != -1) {

		return dp[inde][n];

	}
	int take = 1 + solve(n  - arr[inde], inde, arr, dp);

	int nottake = 0 + solve(n  , inde + 1, arr, dp);

	dp [inde][n] = min(take, nottake);


	return dp[inde][n];
}


int minSquares(int n) {
	vector<int> arr; // To store all perfect squares <= n
	for (int i = 1; i * i <= n; i++) {
		arr.push_back(i * i);
	}

	// DP table where dp[i] stores the minimum number of squares that sum to 'i'
	vector<int> dp(n + 1, INT_MAX);

	dp[0] = 0; // Base case: 0 perfect squares sum up to 0

	// Fill the dp array using the bottom-up approach
	for (int i = 1; i <= n; i++) {
		for (int square : arr) {
			if (i - square >= 0) {
				dp[i] = min(dp[i], dp[i - square] + 1);
			}
		}
	}

	return dp[n]; // The answer for n will be stored in dp[n]
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif


	int n = 12;
	vector<int> arr;
	for (int i = 1; i * i <= n; i++) {
		arr.push_back(i * i); // Store perfect squares up to n
	}
	vector<vector<int>>dp(n + 1, vector<int>(n + 1, -1));
//	cout << solve(n , 0, arr, dp) << endl;
	cout << minSquares(12) << endl;




}
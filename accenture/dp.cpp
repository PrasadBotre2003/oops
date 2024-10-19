#include <bits/stdc++.h>
using namespace std;


int solve2(int inde,vector<int>&arr,int n){
if(inde > n){
    return 0;
}


int a = solve2(inde+2,arr,n) + arr[inde];
int b = solve2(inde + 1,arr,n) + 0;

int ans = max(a,b);

return ans;


}

int solveTabu(vector<int>&arr){
int n = arr.size();

vector<int>dp(n,0);

dp[0] = arr[0];

for(int i = 1; i<n ; i++){
int a = dp[i-2] + arr[i];
int b = dp[i-1] + 0;

dp[i] = max(a,b);

}

return dp[n-1];
}


int solve1(vector<int>&arr,int n){
if(n<0){
    return 0;
}


int a = solve1(arr,n-2) + arr[n];
int b = solve1(arr,n-1) + 0;

int ans = max(a,b);

return ans;


}



int solve(int inde, int n, vector<int>& arr, vector<int>& dp) {
    if (inde >= n) {
        return 0;
    }
    if (dp[inde] != -1) {
        return dp[inde];
    }

    // Include current element and move to the next non-adjacent element
    int include = arr[inde] + solve(inde + 2, n, arr, dp);
    // Exclude current element and move to the next element
    int exclude = solve(inde + 1, n, arr, dp);

    // Take the maximum of including or excluding the current element
    dp[inde] = max(include, exclude);
    return dp[inde];
}

int main() {
    vector<int> arr = {9, 9, 8, 2};
    int n = arr.size();
    vector<int> ds;  // This vector is not used in the current implementation
    vector<int> dp(n, -1);

    cout << solveTabu(arr) << endl;
    return 0;
}

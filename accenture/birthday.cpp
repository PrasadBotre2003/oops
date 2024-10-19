#include <bits/stdc++.h>
using namespace std;

void solve(int inde, int n, int arrsi, vector<int>& arr, vector<pair<int,int>>& ds, vector<pair<int,int>>& ans) {
    // Base case: if the size of ds is equal to arrsi
    if (ds.size() == arrsi) {
        // Copy ds to ans
        ans.insert(ans.end(), ds.begin(), ds.end());
        return;
    }

    // Boundary check to avoid out-of-range access
    if (inde >= n - 1) return;

    // Check if arr[inde + 1] is divisible by arr[inde]
    if (arr[inde + 1] % arr[inde] == 0) {
        ds.push_back(make_pair(arr[inde], arr[inde + 1]));
        solve(inde + 1, n, arrsi, arr, ds, ans);
        ds.pop_back();
    }

    // Recur without including the current pair
    solve(inde + 1, n, arrsi, arr, ds, ans);
}

int main() {
    int n = 3;
    int arrsi = 2;

    vector<int> arr = {1, 2, 3};
    vector<pair<int, int>> ds;
    vector<pair<int, int>> ans;

    solve(0, n, arrsi, arr, ds, ans);

    // Print all pairs
    for ( auto p : ans) {
        for(auto i  : p){
 cout << i.first << " " << i.second << endl;
        }
       
    }

    return 0;
}

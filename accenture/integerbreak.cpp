#include<bits/stdc++.h>
using namespace std;
int findmax(vector<int>&ds) {

    int ans = 1;

    for (int  i  = 0 ; i < ds.size() ; i++) {

        ans = ans * ds[i];
    }


    return ans;

}
int  solve(int n, int inde, int k, vector<int>&arr, vector<int>&ds, int sum, int &maxsum, int ans) {

    if (inde >= n) {


        return 0;
    }

    if (sum == k) {

        int find = findmax(ds);

        maxsum = max(find, maxsum);

        return 1;

    }

    if (sum > k)return 0;

    ds.push_back(arr[inde]);

    int a = solve(n, inde, k, arr, ds, sum + arr[inde], maxsum, ans * arr[inde]) ;


    ds.pop_back();

    int b = solve(n, inde + 1, k, arr, ds, sum + 0, maxsum , ans) ;



    return ans;
}

int breakinteger(int num) {

    int quant = num / 3 , reminder = num % 3 ;
    if (reminder == 0) return pow(3, quant);
    if (reminder == 1) return pow(3, quant - 1 ) * 4;

    return pow(3, quant) * 2;






}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif
    int num = 10;
    cout << breakinteger(num) << endl;

}
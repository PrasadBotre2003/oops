#include <bits/stdc++.h>
using namespace std;
/*
Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10



*/

void solve(int ind, vector < int > & arr, int n, set<vector<int>>&ans,vector<int>ds){


if(ind == n){

    ans.insert(ds);

    return;
}
ds.push_back(arr[ind]);
solve(ind+1,arr,n,ans,ds);

ds.pop_back();

solve(ind+1,arr,n,ans,ds);

}


 
int main() {

vector<int>arr = {1,2,2};
int n = arr.size();
vector<int>ds;
set<vector<int>>ans;
solve(0,arr,n,ans,ds);

for(auto i : ans){
    for(auto j : i){
        cout<<j;
    }
    cout<<" "<<endl;
}


}













#include<bits/stdc++.h>
using namespace std;
/*416. Partition Equal Subset Sum
Medium
Topics
Companies
Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

 

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
 

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100*/

bool subsetSumUtil(int ind, int target, vector<int>& arr ) {
    // Base case: If the target sum is 0, we found a valid partition
    if (target == 0)
        return true;

    // Base case: If we have considered all elements and the target is still not 0, return false
    if (ind == 0)
        return arr[0] == target;



    // Recursive cases
    // 1. Exclude the current element
    bool notTaken = subsetSumUtil(ind - 1, target, arr);

    // 2. Include the current element if it doesn't exceed the target
    bool taken = false;
    if (arr[ind] <= target)
        taken = subsetSumUtil(ind - 1, target - arr[ind], arr);

    // Store the result in the DP table and return
    return  notTaken || taken;
}


bool solve(int inde ,vector<int>&arr ,int k){
if(inde == 0)return true;

 if(inde >=arr.size() || k < 0){
    return false;
 }

bool vis , notvis;
 if(arr[inde ]<=k){
vis = solve(inde+1,arr,k-arr[inde]);
 }
notvis = solve(inde+1,arr,k );

return vis || notvis;


}

int main(){
vector<int>arr = {1,2,5};
int n = arr.size();

int k = 8;

int inde = 0 ;


cout<<subsetSumUtil(n-1,k/2,arr)<<endl;



}
#include<bits/stdc++.h>
using namespace std;
/*Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

 

Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
Example 3:

Input: k = 4, n = 1
Output: []
Explanation: There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.
 

Constraints:

2 <= k <= 9
1 <= n <= 60*/


void solve(int inde ,int k ,int n, int sum,int target,vector<int>arr,vector<vector<int>>&ans,vector<int>ds){


if(ds.size() == k){
    
if(sum == target){

    ans.push_back(ds);
}
return ;
}

 if (sum > target || inde == arr.size()) {
        return;
    }


ds.push_back(arr[inde]);
solve(inde+1,k,n,sum+arr[inde],target,arr,ans,ds);

ds.pop_back();

solve(inde+1,k,n,sum,target,arr,ans,ds);



}


int main(){


int  k= 3;
int n = 5;
int target  = ;
vector<int>arr= {1,2,5};



vector<vector<int>>ans;
vector<int>ds;

solve(0,k, n , 0,target,arr,ans,ds);

 for (auto& combination : ans) {
        for (auto& num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }


}
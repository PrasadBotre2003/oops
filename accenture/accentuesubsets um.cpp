#include<bits/stdc++.h>
using namespace std;

int solve1(vector<int>&arr, int sum , int inde,vector<vector<int>>&dp ){
  
  if(sum == 0)return 0;


  if(inde >= arr.size() || sum < 0){
    return INT_MAX;
  }

    if(dp[inde][sum]!= -1){
        return dp[inde][sum];
    }
    
int pick = INT_MAX-1;
if(arr[inde]<=sum){
pick  = 1 +  solve1(arr, sum - arr[inde] ,inde,dp);
}

  


 int notpick = solve1(arr, sum ,inde+1,dp);


dp[inde][sum ] =  min ( pick ,notpick) ;


return dp[inde][sum];
}


int main(){
int n  = 12 ; 


vector<int>sq;

 for (int i = 1; i * i <= n; i++) {
        sq.push_back(i * i); // Populate the vector with perfect squares
    }

vector<vector<int>>dp(sq.size()+1, vector<int>(n+1,-1));

cout<<solve1(sq,n,0,dp)<<endl;





}
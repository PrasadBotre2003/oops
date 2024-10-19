#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>coin,int n,int inde ,int amount,vector<vector<int>>&dp){
if(inde >= coin.size())return INT_MAX-1 ;

if(amount == 0)return 0;

if(dp[inde][amount] != -1){
    return dp[inde][amount];
}
int pick = INT_MAX;


if(coin[inde] <=amount){

  pick =  1 +  solve(coin,n,inde,amount - coin[inde],dp); 
}

  int notpick =  solve(coin,n,inde+1,amount ,dp); 

dp[inde][amount]  = min(pick ,notpick);

return dp[inde][amount];
}

int main(){


vector<int>coin = {1,2,5};
int amount = 11 ;
//op = 3
int n = coin .size();
 vector<vector<int>>dp(n,vector<int>(amount+1,-1));
cout<<solve(coin,n,0,amount,dp)<<endl;





}
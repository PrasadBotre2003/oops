#include<bits/stdc++.h>
using namespace std;



class Solution {
public:

int solve(int num ,vector<int>&arr ,int inde,vector<vector<int>>&dp){
if(num == 0){
    return 1;
}

if(num<0 || inde >=arr.size()){
    return 0;
}
if(dp[inde][num] != -1){
    return dp[inde][num];
} 

int take = 0 ;

if(arr[inde]<=num){
take = arr[inde] * solve(num-arr[inde] ,arr ,inde,dp);
}


int nottake = solve(num , arr ,inde+1,dp);

dp[inde][num] =  max(take ,nottake);
return dp[inde][num];
}
    int integerBreak(int n) {
        vector<int>arr ;
        for(int i = 1 ;i < n ; i++){


            arr.push_back(i);
        }
        vector<vector<int>>dp(n+1 ,vector<int>(n+1, -1));

return solve(n ,arr, 0,dp);
    }
};

int main(){
int num = 3;
int inde =  1;

 vector<int> nums;

        for(int i=1;i<=num;i++)
            nums.push_back(i);

cout<<solve2(num ,inde ,nums,0)<<endl;


}
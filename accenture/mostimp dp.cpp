#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>coin,int inde ,int amount){
if(inde >= coin.size())return INT_MAX-1 ;

if(amount == 0)return 0;
int pick = INT_MAX;
if(coin[inde] <=amount){

  pick =  1 +  solve(coin,inde,amount - coin[inde]); 
}

  int notpick =  solve(coin,inde+1,amount ); 

return min(pick ,notpick);
}

int main(){


vector<int>coin = {1,2,5};
int amount = 11 ;
//op = 3
 
cout<<solve(coin,0,amount)<<endl;





}
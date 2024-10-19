#include<bits/stdc++.h>
using namespace std;

int solve(int num){
if(num == 0)return 0;

if(num == 1)return 1;

if(num ==2)return 1;


return solve(num-1) + solve(num-2) + solve(num-3);


}

int main(){



    int n = 4 ;
cout<<solve(n)<<endl;


}
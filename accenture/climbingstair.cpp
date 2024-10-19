#include<bits/stdc++.h>
using namespace std;

int solve(int n,int ans){
if(n == 0){


ans++;
return 1;

}

if(n < 0){
    return 0;
}

int ans1 = solve(n-1,ans) + solve(n-2,ans);

return ans1;



}
int main(){

int n = 2;
int ans = 0 ;
cout<<solve(n,ans)<<endl;


    
}
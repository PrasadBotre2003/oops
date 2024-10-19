#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;

int main(){

int n = 4 ;
vector<int>arr = {1,59, 30 ,30};

int ans = 0 ;

map<int,int>mp;



for(int i = 0 ;i < n ; i++){
int a ;

if(arr[i] %60 == 0 && arr[i] != 0){
	a  = 60;
}else{
a = arr[i]%60;

}

int b = 60 - a ;

if(mp.find(b) != mp.end()){



	ans  = (ans+mp[b])%MOD;
}

mp[a%60]++;



}

cout<<ans<<endl;



}
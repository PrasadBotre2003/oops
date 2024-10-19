#include<bits/stdc++.h>
using namespace std;

int solve(string s,int r,int l ,int n){


vector<int>hash(255,-1);

int malen = 0;

while(r<n){

if(hash[s[r]]!= -1){
if(hash[s[r]]>=l){
l = hash[s[r]]+1;
}

}


int len = r - l + 1;
malen = max(malen,len);
hash[s[r]] = r;

r++;




}

return malen;

}
int main(){
string s = "abcabcbb";
int n = s.length();

int l = 0 ;
int r = 0;

cout<<solve(s,r,l,n)<<endl;


}
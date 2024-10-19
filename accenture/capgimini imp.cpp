#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s= "facetious";
vector<bool>vis(s.length(),false);
int ans = 0 ;
for(auto i : s){

if(vis[i-'0'] == true){
ans+=1;
}
else{
    ans+=2;
}

vis[i-'0'] = true;





}

    cout<<ans<<endl;
    return 0;
}

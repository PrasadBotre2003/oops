#include <bits/stdc++.h>
using namespace std;

int main() {
   




int n = 3 ;
vector<int>arr  = {5,5,105};
int m = 5 ;

vector<bool>vis(n ,true);

int ans = 0 ;
for(int i = 0 ;i <  n ; i++){
if(arr[i] % 5 == 0){
    vis[i] = false;
    ans ++;
}
}



for(int i = 0 ;i < n ; i++){
    if(vis[i]){
        if(m != 0 && m >=arr[i]){
             m = m -arr[i];
             ans++;
        }
    }
}

cout<<ans<<endl;



























    return 0;
}































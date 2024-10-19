#include<bits/stdc++.h>
using namespace std;
int solve(string &s){

int n = s.length();
int cnt = 0 ;

for(int i = 0 ;i < n ; i++){

vector<int>hash(3,0);
    for(int j = i ; j < n ; j++){
hash[s[j] - 'a'] = 1;
if(hash[0] + hash[1] + hash[2] == 3){
    cnt++;
}


    }
}



return cnt;


}

int solve1(string &s){

int n = s.length();
int cnt = 0 ;
vector<int>vis(3,-1);
for(int i =  0 ;i < n ; i++){
vis[s[i] -'a'] = i;
if(vis[0] !=  -1 && vis[1] !=  -1 &&vis[2] !=  -1){
    cnt = cnt  + (1 + min(vis[0],min(vis[1],vis[2])));
}



}



return cnt;


}




int main(){




    string s = "bbacba";

cout<<solve1(s)<<endl;
}
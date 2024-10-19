#include<bits/stdc++.h>
using namespace std;



int main(){

int ans = 0;

int cnt = 0;
    string s = "TTTHHTT";
for(int i = 0; i< s.length();i++){

if(cnt == 3)break;
if(s[i] =='H'){
    ans+=2;
    cnt++;
}
else{
    ans-=1;
    cnt= 0;
}




}

cout<<ans<<endl;




}
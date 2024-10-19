#include<bits/stdc++.h>
using namespace std;



int main(){

int H ,V ,VN;
cin>>H>>V>>VN;


int ans = V/VN;
ans = ans* ans;

 ans = ans * H;

cout<<ans<<endl;

}
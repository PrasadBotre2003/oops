#include<bits/stdc++.h>
using namespace std;

void steavethos(int n,vector<int>&prime){
vector<bool>visited(n+1,true);

visited[0] = visited [1] = false;

for(int i = 2 ; i<=n;i++){

for(int j = i * i ;j<=n;j+=i){
    visited[j] = false;
}
}


for(int i = 2 ;i < visited.size();i++){
    if(visited[i]){
        cout<<i<<endl;
        prime.push_back(i);
    }
}
}



int main(){
    vector<int>prime;
steavethos(10,prime);

int sum = 0 ;

for(auto i  : prime){
sum+=i;

}
cout<<sum<<endl;










}
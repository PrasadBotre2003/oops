#include<bits/stdc++.h>
using namespace std;

bool elesort(pair<char, int>& a, pair<char, int>& b){
   
        return a.second > b.second;
    
}

int main(){

    string tree = "tree";
    unordered_map<char,int>nmap;
for(auto i : tree){
    nmap[i]++;
}


vector<pair<char,int>>pq(nmap.begin(),nmap.end());



sort(pq.begin(),pq.end(),elesort);

string ans;

for(auto i : pq){

ans += string(i.second,i.first);



}

cout<<ans<<endl;
}
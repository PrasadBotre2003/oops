#include <bits/stdc++.h>
using namespace std;
/* print the  remaining string in 1st input which is not in the 2nd string 
Input1: AABBCC
Input2: AB 
Output: CC 

Otherwise 
Input:AABBCC
input2: ABC
output: Empty*/

void solve(){

string s = "AABBCC";
string s2 = "AB";

set<char>st;

for(auto i : s){
    st.insert(i);
}

for(int i = 0 ;i < s2.length();i++){

    if(st.find(s2[i]) != st.end()){
        st.erase(s2[i]);
    }
}

for(auto i : st){
    cout<<i<<endl;
}
}
int main() {

string s = "AABBCC";
string s2 = "AB";

map<char,int>nmap;



for(auto i : s){
    nmap[i]++;
}


for(auto i : s2){
    if(nmap.find(i) != nmap.end()){
        nmap.erase(i);
    }
}
string ans  = "";
for(auto i : nmap){
   for(int j = 0 ;j < i.second;j++){
    
ans+=i.first;
   }
}
cout<<ans<<endl;

    return 0;
}

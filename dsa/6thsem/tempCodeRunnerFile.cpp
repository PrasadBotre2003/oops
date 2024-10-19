#include<bits/stdc++.h>
using namespace std;

void decrypt(string input){


}

int main(){
string s = "a2b2c2d1";
int k =5 ;
unordered_map<char,int>nmap;


for(int i = s.length() ; i>=0;i--){
if(s[i]>='a' && s[i]<='z'){
int feq = s[i+1]-'0';

nmap[s[i]] = feq;
}


}


for(auto &i : nmap){
   k = k - i.second;
   if(k<=0){
    cout<<i.first<<" "<<endl;
    break;
   }
}





}
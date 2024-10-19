/*2
2
123
78
130
10
0*/
#include<bits/stdc++.h>
using namespace std;
int maximummonster(int n ,int ep,vector<int>&power,vector<int>&bonous){
//unordered_map<int,int>nmap;
vector<pair<int,int>>nmap;
 for (int i = 0; i < n; i++) {
       // nmap[power[i]] = bonous[i];
       nmap.push_back({power[i],bonous[i]});
    }

 


int cnt = 0;

sort(power.begin(),power.end());

for(int i  = 0; i< n; i++){
    int curr = nmap[i].first;
    if(ep>=curr){
 //if(nmap.count(power[i] )>0){
    ep = ep + nmap[i].second;
 //   cout<<"ep"<<ep<<endl;
 //}



cnt++;
    }
}



return cnt;

}



int main(){
/*cout<<"nusber of monsters"<<endl;
int n ;
cin>>n ;

cout<<"enter the eperince "<<endl;
int ep ;
cin>>ep;


vector<int>power(n);
vector<int>bonous(n);

cout<<"enter pow of monster"<<endl;
for(int i = 0; i< n ; i++){
int pow ;

cin>>pow;
power.push_back(pow);


}
cout<<"enter bonous of monsters"<<endl;
for(int i = 0; i< n ; i++){
int bonos;

cin>>bonos;
bonous.push_back(bonos);
*/


int n  = 5 ;
 int ep = 200;
 vector<int>pow = {190,300,200,400,150};
  vector<int>bonous = {10,10,10,10,10};
cout<<maximummonster(n ,ep,pow,bonous)<<endl;



    
}
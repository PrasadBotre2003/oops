#include<bits/stdc++.h>
using namespace std;




int main(){
string s = "baabaab";



int i = 0 ;
int k =4 ;
int ma = 0 ;

while(k<s.length()){
int acnt = 0;


for(int j = i  ; j <= k;j++){
if(s[j] =='a'){
    acnt++;
}



}

cout<<acnt<<endl;

ma = max(ma,acnt);

i++;
k++;



}


cout<<"ans"<<ma<<endl;




}
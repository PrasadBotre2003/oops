#include<bits/stdc++.h>
using namespace std;



int main(){

int n = 20 ;
 vector<bool>prime(20,true);
 prime[0] = false;
 prime[1] = false ;

 for (int  i = 2 ;i <=n ; i ++){

    for(int j = i * i  ;j <= n ; j  = j + i ){
        prime[j] = false;
    }
 }


 for(int i  = 0 ; i < prime.size();i++){

    if(prime[i]){
        cout<<i<<endl;
    }
 }



}
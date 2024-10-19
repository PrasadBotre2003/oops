#include<bits/stdc++.h>
using namespace std;
/*int bin(int  n ){
string ans = "";

while(n){
if(n%2 == 1){
    ans+='1';
}
else{
    ans+='0';
}


n = n / 2;


}

reverse(ans.begin(),ans.end());

int sum = 0;
for(auto i : ans){
if(i == '0'){
    sum+=1;
}
else{
    sum+=2;
}

}

return sum;
}
*/

int bin(int  n ){
int sum = 0;

while(n){
if(n%2 == 1){
sum+=2;
}
else{
    sum+=1;
}


n = n / 2;


}
return sum;
}


int main(){

int n  = 5;
vector<int>arr;

/*for(int  i = 1 ; i<=n;i++){
    if(bin(i) &1S){
        cout<<i<<endl;
    }
}


for(int i = 1 ;i <= n ; i++){
    if(bin(i) %2 != 0){
        cout<<i<<endl;
        break;
    }
}
*/


for(int i = 1 ; i<= n ; i++){

int sum = 0; 
int cnt = 0 ;

int ele = i;
while(ele>0){


if(ele&1 ){
sum+=2;

}
else{
    sum+=1;
}
ele = ele>>1;



}

if(sum&1){
cout<<sum<<endl;
}




}


}
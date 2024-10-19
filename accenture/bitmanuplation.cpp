#include<bits/stdc++.h>
using namespace std;

  int findbit(int num,int i){
      
      if(num & (1 << i)!=0){
          return 1;
      }
      else{
          return 0;
      }
      
      
  }

int clearbit(int num,int i){
      
    num = num & ~(1<<i);
      
      return num;
  }
  


string solve(int n){
string s = "";

while(n!=0){

if(n%2 == 1){
    s+='1';
}
else{
    s+='0';
}
n = n/ 2;
}
return s;
}


int bindec(string s){
int n = s.length();
int digit = 0;
for(int i = n -1;i>=0;i--){

if(s[i] == '1'){
    digit+= pow(2,i);
}

}
return digit;

}


int main(){
 cout<<solve(15)<<endl;
 cout<<bindec("1101")<<endl;
 cout<<findbit(70,3)<<endl;
 cout<<clearbit(70,3)<<endl;
}
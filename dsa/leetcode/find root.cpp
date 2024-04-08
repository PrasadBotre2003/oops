#include<iostream>
using namespace std;
long long  int binser(int n){
    int s = 0;
    int e = n -1;
 long long int  m = s + (e - s)/2;
   /*if(n == 0){
     return n;
   }
   else if(n == 1){
     return n;
   }*/
long long   int ans = 0;
    while(s<=e){
 int sq = m * m;
  if(n == sq){
   return m;
  }
if(sq<n){
   ans = m;
     s = m + 1;
      }
else{
e = m - 1;
}
m = s + (e - s)/2;
    }
    return ans;
}
double pre(int n, int precision,int root ){
  double  factor = 1;
  double ans = root;
  for(int i = 0; i< precision;i++){
    factor = factor/10;
    for (double j = ans; j * j< n; j = j +factor){
      ans  = j;
    }
  }
  return ans;
}

  int main(){
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;
    
  int root = binser(n);
  cout<<root<<"root"<<endl;
  
    cout<<"precision ans "<<pre(n,5,root )<<endl;
   
    return 0;
  }

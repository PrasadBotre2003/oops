
#include <iostream>
using namespace std;
int pivot(int arr[],int n){
 int s = 0;
  int e = n-1;
 int  m = s +(e-s)/2;
 while(s<e){
  if(arr[m]>=arr[0]){
    s = m + 1;
  }
  else {
    e = m;
  }
   m = s +(e-s)/2;
}
  return m;
}
int binserch(int arr[],int n,int k){
 int  st = 0;
  int ed = n-1;
  int m = st + (ed - st)/2;
  int cnt;
  while(st<=ed){
  if(k == arr[m]){
  
    return m;
  }
   else if(k>arr[m]){
      st = m + 1;
    }
    else{
      ed = m - 1;
    }
   m = st + (ed - st)/2;
  }
return -1;
}
int main() {
int arr[6] = {7,9,2,3,1,5};
 cout<<"bin serch"<< binserch(arr,6,7)<<endl;
  //cout<<"pivot ele is in indi"<<pivot(arr,6);
}



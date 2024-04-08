#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
 for(int i = 0; i<n;i++){
   cout<<arr[i]<<"  ";
}
  cout<<endl;
}
void sort(int arr[],int n){
  for(int i = 0;i<n;i++){
    for(int j = 1;j<n;j++){
     
      if(arr[i]>arr[j]&& i<j){
        swap(arr[i],arr[j]);
      }
    }
  }
}

int main(){
  int arr[6] = {1,0,1,1,0,1};
   sort(arr,6);
  print(arr,6);
}

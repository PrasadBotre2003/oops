#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
  for(int i = 1;i<n;i++){
    int temp = arr[i];
    int j;
    while( j>=0){
      if(arr[j]> temp){
        arr[j +1] = arr[j];
          j--;
      }
      else{
        break;
      }
    
    }
    arr[j +1] = arr[temp];
  }
}

void bubblesort(int arr[],int n){

for(int i = 0;i<n;i++){
  for(int j = i +1;j < n -i  ;j++){
    if(arr[j]<arr[i]){
      swap(arr[i],arr[j]);
    }
  }
}
}

void selectionsort(int arr[],int n){
  for(int i  = 0 ;i<n-1;i++){
    int min = i;
    for(int j = i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min = j;
      }
    
    }
     swap(arr[min],arr[i]);
  }
}
void display(int arr[],int n ){
  for(int i = 0;i<n;i++){
    cout<<" "<<arr[i];
  }
  cout<<endl;
}
int main() {

  
  int arr[] = {5,2,3,9,5,6,71,3};
    display(arr,8);
selectionsort(arr,8);
  display(arr,8);
  bubblesort(arr,8);
    cout<<"bubble sort"<<endl;
  display(arr,8);
  cout<<"insertion sort"<<endl;
  insertionsort(arr,8);
    display(arr,8);
}

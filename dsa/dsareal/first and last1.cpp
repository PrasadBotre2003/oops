#include <iostream>
using namespace std;
int first(int arr[],int n,int key){
 int s = 0;
  int e = n - 1;
  int ans = -1;
   int mid = s + (e - s)/2;
  while(s<=e){
 
  if(arr[mid]==key){
 ans = mid;
    e = mid -1;
}
   else if(key > arr[mid]){
  s = mid +1;
}
    else if(key < arr[mid]){
  e = mid - 1;
  }
    mid = s + (e - s)/2;
  }
return ans;
}

int last(int arr[],int n,int key){
 int s = 0;
  int e = n - 1;
  int ans = -1;
   int mid = s + (e - s)/2;
  while(s<=e){
 
  if(arr[mid]==key){
 ans = mid;
  s = mid +1;
}
   else if(key > arr[mid]){
  s = mid +1;
}
    else if(key < arr[mid]){
  e = mid - 1;
  }
    mid = s + (e - s)/2;
  }
return ans;
}

int main() {
  int arr[6] = {1,2,2,2,3,4};
 cout<<"first occ of"<<"  "<<first(arr,6,2)<<endl;
 cout<<"last occ of"<<"  "<<last(arr,6,2)<<endl;
 cout<<" no of occurance  "<<(last(arr,6,2)-first(arr,6,2)+1);
  return 0;
}

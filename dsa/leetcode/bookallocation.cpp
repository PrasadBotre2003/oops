bool sol(vector<int> &arr, int n, int m,int mid){
    int studcount = 1;
   int pagesum = 0;
    for(int i = 0;i<n;i++){
  if(pagesum + arr[i]<= mid){
      pagesum = pagesum + arr[i];
  }
 else {
     studcount ++;
     if (studcount > m || arr[i] > mid) {
       return false;
     }
     pagesum = arr[i];
  }
    }
    return true;
}



int findPages(vector<int> &arr, int n, int m) {
  int s = 0;
  
  int sum = 0;
  int ans = -1;

 if(m>n){
     return -1;
 }
  for(int i = 0;i<n;i++){
      sum += arr[i];
  }
  
  int e = sum;
  int mid = s + (e -s)/2;
  
  while(s<=e){
if(sol(arr,n,m,mid)){
    ans = mid;
    e = mid - 1;
}
else{
    s = mid +1;
    }
mid = s + (e - s)/2;
 }
 return  ans;   
}

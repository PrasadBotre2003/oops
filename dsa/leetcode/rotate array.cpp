#include <iostream>
#include<vector>
using namespace std;
void rotatearray(vector<int> &nums,int k){
  int n = nums.size();
vector<int> temp(n);
  for(int i = 0;i< n;i++){
    temp[(i+k)%n] = nums[i];
 }
  nums = temp;
  
}

void display(vector<int> &nums , int k){
 for(int i = 0;i< k; i++){
  cout<<" "<<nums[i];
}
  cout<<endl;
}
int main() {
vector<int> vec;
  vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(4);
  display(vec , 4);
  rotatearray(vec,2);
    display(vec , 4);
  


  
 
}

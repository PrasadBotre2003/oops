#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
void sum(vector<int> &vec1,vector<int> &vec2,vector<int> &ans){
  int i = vec1.size() -1;
    int j = vec2.size() -1;
  
  int carry = 0;
  while(i>=0&&j>=0){
    int sum = vec1[i] + vec2[j] + carry;
    carry  = sum / 10;
    sum = sum % 10;
    ans.push_back(sum);
    i--;
    j--;
  }
  while(i>=0){
    int sum = vec1[i] + carry;
     carry  = sum / 10;
    sum = sum % 10;
    ans.push_back(sum);
    i--;
  }
  while(j>=0){
    int sum = vec2[j] + carry;
     carry  = sum / 10;
    sum = sum % 10;
    ans.push_back(sum);
    j--;
  }
  while(carry != 0){
    int sum = carry;
    carry = sum / 10;
    sum = sum % 10;
      ans.push_back(sum);
    
  }

  
}
void display(vector<int> vec){
  for(int i = 0;i< vec.size();i++){
    cout<<" "<< vec[i];
  }
  cout<<endl;
}
int main() {
  vector<int> vec1;
    vector<int> vec2;
  vector<int> ans;
  
  cout<<"enter size of vector "<<endl;
  int a,b,c,d;
  cin>>a>>b;
  cout<<"enter vec 1 value "<<endl;
  for(int i = 0; i< a;i++){
    cin>>c;
    vec1.push_back(c);
  }
   cout<<"enter vec 2 value "<<endl;
  for(int i = 0; i< b;i++){
   cin>>d;
    vec2.push_back(d);
  }


    display(vec1);
     display(vec2);
cout<<"ans is"<<endl;
  sum(vec1,vec2,ans);
reverse(ans.begin(), ans.end());
 
   display(ans);
}

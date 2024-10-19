#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&arr){

    for(auto i : arr){
        for(auto j : i){
         cout<<j<<" ";
        }
        cout<<endl;
    }
}

void spiral(vector<vector<int>>&arr,int top ,int left,int bottom ,int right,vector<int>&ans){


while(top<=bottom && left<=right){
for(int i = left ;i <=right;i++){
//cout<<arr[top][i]<<" ";
ans.push_back(arr[top][i]);
    
}

top++;


for(int i = top;i <=bottom;i++){
  //  cout<<arr[i][right]<<" ";
    ans.push_back(arr[i][right]);
}



right--;


if(top<=bottom){
for(int i = right;i>=left;i--){
   // cout<<arr[bottom][i]<<" ";
    ans.push_back(arr[bottom][i]);

}

 bottom--;
}


if(left<=right){

for(int i = bottom;i >=top;i--){
    
    ans.push_back(arr[i][left]);
}
left++;

}






}


}


int main(){


    vector<vector<int>>arr  = {
     {1,2,3,4,5},
     {5,6,5,6,7},
     {8,9,4,6,7},
     {1,2,3,4,5}

};
vector<int>ans;

int top = 0;
int left = 0;
int bottom = arr.size()-1;
int right = arr[0].size()-1;




spiral(arr,top,left,bottom,right,ans);
for(auto i : arr){
    for(auto j : i){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<"ans->>>>"<<endl;

for(auto i : ans){
    cout<<i<<" ";
}

}








 













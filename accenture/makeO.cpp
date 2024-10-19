#include<bits/stdc++.h>
using namespace std;

void markrow(vector<vector<int>>&arr,int row,int col,int colsi){
 for(int i = 0 ;i < colsi;i++){
        arr[row][i] = -1;
    }

}
void markcol(vector<vector<int>>&arr,int row,int col,int rowsi){



    for(int i = 0 ;i <= rowsi;i++){
        arr[i][col] = -1;
    }
}

int main(){



    vector<vector<int>>arr  = {
    {1,1,0},
    {1,1,1},
    {0,1,1},
    {1,1,1}};

    int rowsi = arr.size();
    int colsi = arr[0].size();

for(int i = 0; i< rowsi;i++){
    for(int j = 0 ; j< colsi ;j++){
        if(arr[i][j] == 0){
            markcol(arr,i,j,colsi);
            markrow(arr,i,j,rowsi);;
        }
    }
}


for(int i = 0; i< rowsi;i++){
    for(int j = 0 ; j< colsi ;j++){
     if(arr[i][j] == -1){
        arr[i][j] = 0;
     }
    }
    cout<<endl;
}


for(int i = 0; i< rowsi;i++){
    for(int j = 0 ; j< colsi ;j++){
  cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}
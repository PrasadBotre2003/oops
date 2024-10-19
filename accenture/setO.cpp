#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>arr){
for(auto  i : arr){
    for(auto j : i){

        cout<<j<<" ";
    }
    cout<<endl;
}

}

void markcol(vector<vector<int>>&arr,int col,int n){
for(int i = 0;i<n;i++){
if(arr[i][col] != 0){
    arr[i][col]  = -1;
}


}


}



void markrow(vector<vector<int>>&arr,int row,int n){
for(int i = 0;i<n;i++){
if(arr[row][i] != 0){
    arr[row][i]  = -1;
}


}

    
}

void marko(vector<vector<int>>&arr,int colsi,int rowsi){
for(int row = 0;row<rowsi;row++){
    for(int col = 0;col<colsi;col++ ){


        if(arr[row][col] == -1){
            arr[row][col] = 0;
        }
}
}
}



int main(){
vector<vector<int>>arr = {
{0,1,1,1},
{1,1,1,0},
{1,1,1,1}};

display(arr);
int colsi = arr[0].size();
int rowsi = arr.size();

cout<<colsi<<endl;
cout<<rowsi<<endl;


for(int row = 0;row<rowsi;row++){
    for(int col = 0;col<colsi;col++ ){
if(arr[row][col] == 0){
markrow(arr,row,colsi);
markcol(arr,col,rowsi);
}
 }
}

marko(arr,colsi,rowsi);

display(arr);

}



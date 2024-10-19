#include<bits/stdc++.h>
using namespace std;


int main(){


vector<vector<int>>ans = {
{1,2,3},
{4,5,6},
{7,8,9}};

int rowsi = ans.size();
int colsi = ans[0].size();

for(int i = 0 ;i <rowsi ;i++){

    for(int j = i+1 ;j  < colsi;j++){


        swap(ans[i][j],ans[j][i]);
    }
}

for(auto i : ans){

    for(auto j : i){

        cout<<j<<" ";
    }
    cout<<endl;
}


for(int i = 0; i<rowsi;i++){
    reverse(ans[i].begin(),ans[i].end());
}

for(auto i : ans){

    for(auto j : i){

        cout<<j<<" ";
    }
    cout<<endl;
}



}
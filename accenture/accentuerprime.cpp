#include<bits/stdc++.h>
using namespace std;

void solve(vector<bool>&arr){

for(int i = 2 ; i < arr.size();i++){




for(int j = i * i ;j < arr.size() ; j = j+ i){

arr[j] = false;

}

}


}

int main(){
int a = 7;
int b = 13 ;


vector<bool>arr(12 ,true);

arr[0] = false ;
arr[1] = false;


solve(arr);
vector<int>prime;
for(int i = 0 ;i < arr.size();i++){
  if(arr[i]){
    cout<<i<<" ";
    prime.push_back(i);
  }
}

for(int i = 0 ; i < prime.size() ;i++ ){


    if(prime[i] == a && prime[i+1] == b){
        cout<<"match found"<<endl;
    }
}


}
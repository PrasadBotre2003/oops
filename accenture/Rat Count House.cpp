#include<bits/stdc++.h>
using namespace std;

int solve(int r,int unit,vector<int>arr,int n){

int food = r*unit;
int sum = 0;
int cnt = 0;
for(int i = 0;i<n;i++){
    sum+=arr[i];

    if(sum>=food){
        return cnt;
    }
    cnt++;
}
return cnt;

}


int main(){
    int r = 7;
    int unit = 3;
    int n = 8;
    vector<int>arr = {2,8,3,5,7,4,1,2};
   cout<< solve(r,unit,arr,n)<<endl;;
}
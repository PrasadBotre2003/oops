#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int>arr = {1,2,3,4,4,5,5,5};
int or1 = arr[0] ;
int sum = 0;
for(int i  = 1 ; i< arr.size();i++){

if(i%2 == 0){
    or1 = or1 ^ arr[i];
}else{
    sum+=arr[i];
}



}

cout<<sum-or1<<endl;

}
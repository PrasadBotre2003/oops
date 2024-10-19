#include<bits/stdc++.h>
using namespace std;


int main(){

int n = 4;
vector<int>arr;
for(int i =1;i<=n;i++){

arr.push_back(i);

}

vector<pair<int,int>>pq;
int i = 0;
int j = n-1;

while(i<j){

int ele = arr[i]+ arr[j];
if(ele== n){

pq.push_back(make_pair(arr[j],arr[i]));
i++;
j--;



}
else if(ele>n){
    j--;
}
else{
    i++;
}


}

for(auto i : pq){
    cout<<i.first<<" "<<i.second<<" "<<endl;
}


     
}
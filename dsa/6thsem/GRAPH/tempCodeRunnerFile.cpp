#include<bits/stdc++.h>
using namespace std;

void binserch(vector<int>&ans,int n ,int key){

int s = 0;
int e = n -1 ;
int mid = s + (e - s) / 2;

while(s<=n){


if(ans[mid ] == key){
    cout<<"element fount"<<mid<<endl;
}

else if(ans[mid]<key){

s = mid + 1;
}
else if(ans[mid]>mid){
e = mid - 1;

}



}

cout<<"element not found"<<endl;



} 


int main(){

vector<int>ans = {
    1,3,4,5,6,77,99
};
cout<<"hii";
binserch(ans,7,77);

}
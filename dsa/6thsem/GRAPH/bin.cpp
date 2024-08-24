#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>&ans,int key,int s ,int e){

int mid = s + (e - s) / 2;

int inde = 0;


if(ans[mid ] == key){
  
}

else if(ans[mid]<key){

binserch(ans,key,mid+1,e);
}
else if(ans[mid]>key){
binserch(ans,key,0,mid-1);
}

mid = s + (e - s)/2;



}


int main(){





vector<int>ans = {
    1,3,4,5,6,77,99};

binserch(ans,3,0,6);

}
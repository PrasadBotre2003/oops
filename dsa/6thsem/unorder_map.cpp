#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countfrequancy(int *arr,int n,unordered_map<int,int>nmap){
for(int i = 0;i<n;i++){
    nmap[arr[i]]++;
}



vector<int>ans;

int ma = INT_MIN;
int min = INT_MAX;
for(auto a : nmap){
    cout<< a.first <<"  "<<a.second<<"  "<<endl;
    if(a.second > ma){
        ma = a.second;
     

    }
    if(a.second < min){
        min = a.second;
    }
}

for (auto &it : nmap)
{
    if (it.second == ma)
        ans.push_back(it.first);
    break;


 if (it.second == min)
       return ans.push_back(it.first);


}
for(int a : ans){
    cout<<"final ans"<<a<<" ";

}
cout<<endl;
cout<<"ma "<<ma<<endl;
cout<<"min"<<min<<endl;
}
int main(){



int arr[6] =  {1, 2, 3, 1, 1, 4};
unordered_map<int,int>nmap;



countfrequancy(arr,6,nmap);



}
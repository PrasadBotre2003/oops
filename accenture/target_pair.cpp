#include<bits/stdc++.h>
using namespace std;
void solve(int inde , vector<int>&ds,vector<int>&arr,int target,int maproduct,pair<int,int>&mapair){

if(target==0){
    if(ds.size() == 2){
        
        int product = ds[0] * ds[1];

        if(product>maproduct){

            maproduct = product;
            
            mapair = make_pair(ds[0],ds[1]);

        }
        
    }
return;

}

if(target<0 || inde>=arr.size()){
    return ;
}

ds.push_back(arr[inde]);
solve(inde+1,ds,arr,target-arr[inde],maproduct,mapair);

ds.pop_back();

solve(inde+1,ds,arr,target,maproduct,mapair);


}



int main(){

vector<int>arr={8,10,11,7,2,1,11,3};

int maproduct = INT_MIN;
pair<int,int>mapair= {-1,-1};
int target = 18;

vector<int>ds;


sort(arr.begin(),arr.end());

solve(0,ds,arr,target,maproduct,mapair);

cout<<mapair.first<<" "<<mapair.second<<endl;




}
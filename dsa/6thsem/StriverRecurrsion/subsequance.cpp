#include<bits/stdc++.h>
using namespace std;

/*void suset(int sum,int target,int &cnt,vector<string>&ds,string s,int n,int inde,vector<vector<string >>&ans){

if(inde == n){
    if(sum == target){
ans.push_back(ds);
cnt++;

    }

return;
}

ds.push_back(string(1,s[inde]));
suset(cnt,ds,s,n,inde+1,ans);

ds.pop_back();


suset(cnt,ds,s,n,inde+1,ans);

}*/

void iftarget(int target,int inde,int n,int sum,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){

 if (sum > target) return; // if sum exceeds the target, stop the recursion
        if (sum == target) {
            ans.push_back(ds);
            return;
        }
        if (inde == n) return;

ds.push_back(arr[inde]);
iftarget(target,inde+1, n,sum+=arr[inde],arr,ans,ds);

ds.pop_back();

iftarget(target,inde+1,n,sum,arr,ans,ds);




}


int main()
{
int cnt = 0;

	vector<int>arr = {2,3,6,7};
    int target = 7;
    vector<vector<int>>ans;

	vector<int>ds;

    iftarget(target,0,4,0,arr,ans,ds);

for(auto it : ans){

    for(auto is : it){
        cout<<is<<" ";
    }
    cout<<endl;
}


}
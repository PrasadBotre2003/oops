#include<bits/stdc++.h>
using namespace std;

/*Fruit Into Baskets
Difficulty: MediumAccuracy: 47.98%Submissions: 48K+Points: 4
You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array of arr[], where arr[i]  is the type of fruit the ith tree produces.
You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow :

You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of the baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array of fruits, return the maximum number of fruits you can pick.

Examples:

Input: arr[]= [2, 1, 2]
Output: 3
Explanation: We can pick one fruit from all three trees. Please note that the type of fruits is same in the 1st and 3rd baskets.
Input: arr[] = [3, 1, 2, 2, 2, 2]
Output: 5
Explanation: It's optimal to pick from the last 5 trees. Please note that we do not pick the first basket as we would have to stop at thrid tree which would result in only 2 fruits collected.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] <=n*/

int solve(vector<int>&arr,int k){
int  n  = arr.size();
int malen = 0;
for(int i = 0 ;i < n ; i++){
    set<int>s;
for(int j = i ; j< n ; j++){


s.insert(arr[j]);


if(s.size()<=k){
    int len = j - i + 1;
malen = max(malen,len);
}
else{
    break;
}
}



}



return malen;


}


int solve1(vector<int>&arr,int k){
int  n  = arr.size();
int malen = 0 ;
int r = 0;
int l = 0 ;
map<int ,int>nmap;
while(r<n){
 nmap[arr[r]]++;
if(nmap.size()>k){
    
    nmap[arr[l]]--;
     if (nmap[arr[l]] == 0) {
                nmap.erase(arr[l]);
            }
    l++;
}


if(nmap.size()<=k){
   
    int len = r - l + 1;

    malen = max(len,malen);
}

r++;

}

return malen;




}
int main(){

vector<int>arr = {1,1,1,0,0,0,1,1,1,1,0};



int k = 2;

cout<<solve1(arr,k)<<endl;

}
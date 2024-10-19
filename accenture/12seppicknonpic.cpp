#include<bits/stdc++.h>
using namespace std;
int solve(int num,map<int,int>&nmap){


if(num<=0){


    return 0;
}


int notpick =solve(num-1,nmap);

int pick = nmap[num] + solve(num-2,nmap);


return max(notpick,pick);






}





int main(){




    vector<int>arr = {2,2,3,3,3,4};

map<int,int>nmap;



for(auto i : arr){
    nmap[i] +=i; 
}


for(auto  i : nmap){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<solve(4,nmap)<<endl;

}
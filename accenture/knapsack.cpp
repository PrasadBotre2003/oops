#include<bits/stdc++.h>
using namespace std;
int solve(int wt ,vector<int>weight ,vector<int>value,int inde){


if(wt == 0 ){
    return 0;
}
if(inde >= weight.size() || wt <0){
    return 0;
}

int pick =  INT_MIN , notpick = INT_MIN ;

if(weight[inde] <=wt){

    pick = value[inde] + solve(wt - weight[inde],weight,value,inde+1);
}

notpick = solve(wt ,weight ,value ,inde+1);



return max(pick ,notpick);

}




int main(){
int n = 4 ;
int wt = 5 ;
vector<int>weight = {1,2,4,5};
vector<int>value = {5,4,8,6};

int inde = 0 ;
cout<<solve(wt ,weight ,value , inde)<<endl;


}
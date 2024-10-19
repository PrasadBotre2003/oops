#include<bits/stdc++.h>
using namespace std;
//maxmmum sum


int main(){
vector<int>arr = {6,2,3,4,7,2,1,7,1};
int k = 4;

int n = arr.size();
int lsum = 0;
int rsum = 0;
 int masum = 0;



 for(int i = 0; i< k;i++){

lsum = lsum + arr[i];
masum = max(masum,lsum);
 }



int rightinde = n -1;

for(int i = k -1; i>=0;i--){



    lsum = lsum - arr[i];
    rsum = rsum + arr[rightinde];
    rightinde--;


    masum = max(masum,lsum+rsum);
}


cout<<masum<<endl;


}
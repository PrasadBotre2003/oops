#include<bits/stdc++.h>
using namespace std;
int specialfibbnacchi(int n){

    if(n == 0)return 0;

    if(n ==1)return 1;


    int ans=  specialfibbnacchi(n-1)*specialfibbnacchi(n-1) + specialfibbnacchi(n-2)*specialfibbnacchi(n-2);



    return ans%47;
}

int main(){





    int n =6 ;

    cout<<specialfibbnacchi(n)<<endl;
}
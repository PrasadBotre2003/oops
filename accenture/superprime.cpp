#include<bits/stdc++.h>
using namespace std;
bool prime(int num){

    for(int i = 2 ;i < num;i++){
        if(num%2 == 0){
            return false;
        }
    }
    return true;
}




int main(){
    
int nnum1 = 1235;

int ans = 0 ;
while(nnum1){
        int num1 = nnum1%10;
    
ans+=num1;
nnum1 = nnum1/10;

}


cout<<ans<<""<<endl;
cout<<prime(ans)<<endl;



}
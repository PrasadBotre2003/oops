#include<bits/stdc++.h>
using namespace std;


int main(){






    string s = "125847";
int i = s.length()-1 ;



while(i>=0){


int ele = s[i] - '0';
if(ele&1){

cout<<s.substr(0,i+1)<<endl;
break;

}






i--;
}


}
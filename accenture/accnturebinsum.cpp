#include<bits/stdc++.h>
using namespace std;

int bintoint(string s){
    int k = 0 ;
int ans = 0;

    for(int i = s.length() ;i >=0;i--){
        if(s[i] == '1'){
            ans = ans + pow(2,k);
        }
        k++;
    }

    return ans;
}



string Inttobin(int num){
string temp = "";
    while(num){
int rem = num%2;
temp+=to_string(rem);
num  = num/2;
    }

    reverse(temp.begin(),temp.end());

    return temp;
}


string solve(string &s1 ,string &s2){
int i = s1.length()-1;
int j = s2.length()-1;



int carry = 0;
string ans = "";
while(i>=0 || j>= 0|| carry >0 ){
int sum = carry ;


if(i>=0){
sum+= s1[i] - '0';
i--;
}

if(j>=0){
sum+= s2[j] - '0';
j--;



}

ans+=(sum%2) + '0';

carry = sum / 2;



}


reverse(ans.begin(),ans.end());



return ans ;


}
int main(){




string s1 = "1010";
string s2 = "1011";

cout<<solve(s1,s2)<<endl;

}
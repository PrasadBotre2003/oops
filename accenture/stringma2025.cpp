#include<bits/stdc++.h>
using namespace std;


int main(){

vector<int>vec;


    string s = "i have 8 and 5000 gram packet of rice";
string temp = "";
int num = 0;
bool flag = false;
for(int i = 0; i< s.length();i++){
    int ch = s[i] - '0';

if(ch>=0 && ch<=9 ){
    if(flag){

        num = num*10;
    }
num +=ch;
flag = true;

}
else{
    if(num!=0){
        vec.push_back(num);
    }

flag = false;
num = 0;

}


}
int ma = INT_MIN;

for(auto i : vec){
    cout<<i<<" "<<endl;
    ma = max(ma,i);
}
cout<<"ans ==>"<<ma<<endl;

}
#include<bits/stdc++.h>
using namespace std;

string operation(string s1,string s2, string opration){
string s = "";
for(int i = s1.size()-1;i>=0;i--){

if(opration == "AND"){

if(s1[i] == '1' && s2[i] =='1'){
    s = s+ '1';
}
else{
    s = s + '0';
}
}
else if(opration == "OR"){

if(s1[i] == '0' && s2[i] =='0'){
    s = s+ '0';
}
else{
    s = s + '1';
}

}
else{

if(s1[i] == '1' && s2[i] =='0' || s1[i] == '0' && s2[i] =='1' ){
    s = s+ '1';
}
else{
    s = s + '0';
}

}

}



reverse(s.begin(),s.end());

return s;




}



     


int main(){
string s1 = "1101";
string  s2 = "1011";
string  opration = "XOR";


cout<<operation(s1,s2,opration)<<endl;




}
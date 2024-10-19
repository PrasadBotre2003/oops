#include<bits/stdc++.h>
using namespace std;


int main(){

string str = "      fly me to the moonprasad    ";



str.erase(0,str.find_first_not_of(" "));
str.erase(str.find_last_not_of(" ")+1);
cout<<str<<endl;
    
    string temp = "";
for(int  i = str.length()-1;i>=0;i--){
if(str[i] ==' '){
    reverse(temp.begin(),temp.end());
    cout<<temp<<temp.length()<<endl;
    break;
}

temp+=str[i];


}



}
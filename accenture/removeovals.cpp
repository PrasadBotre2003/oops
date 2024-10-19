#include<bits/stdc++.h>
using namespace std;

bool isovel(char &ch){


    if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

        return true;
    }
    else{
        return false;
    }
}




bool isconsonent(char &ch){

    if(isovel(ch)){
return false;
    }else{
return true;
    }
}

int main(){



string s = "applesarefallingfromtheskies";
string ans = "";
int n = s.length();


    ans+=s[0];

for(int i = 1 ; i< n ; i++){

    if(isovel(s[i]) && isconsonent(s[i-1]) && isconsonent(s[i+1])){


    }
    else{
ans+=s[i];

    }
}

cout<<ans<<endl;



}
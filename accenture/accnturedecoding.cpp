#include<bits/stdc++.h>
using namespace std;


void mapping(map<string,char>&nmap){
int i = 1;
string freq = "";
for(char ch = 'A' ; ch<='Z';ch++){



freq+='1';




nmap[freq] = ch;
i++;

}


}
//without map 
string  solve(string &input){

string ans = "";

int cnt = 0;

for(int i = 0 ;i < input.length();i++){

    if(input[i] =='0'){
        
        char ch = 'A' + cnt-1;
        cnt = 0;
ans+=ch;
    }

    cnt++;

}
char ch = 'A' + cnt - 1;
ans+=ch;

return ans;


}

int main(){
string input = "11111111111111111111111111";

cout<<solve(input)<<endl;









}

/*
map<string,char>nmap;


mapping(nmap);


for(auto i : nmap){

    cout<<i.first<<" "<<i.second<<" "<<endl;
}
string ans = "";
string temp = "";
string input = "11101111011111";

for(int i = 0 ;i < input.length();i++ ){
  if(input[i] == '0'){

       if(nmap.find(temp) != nmap.end()){
        ans+=nmap[temp];
        temp= "";
       }
    }
    if(input[i]!='0'){
    temp+=input[i];
    }
}

if(nmap.find(temp) != nmap.end()){
        ans+=nmap[temp];
        temp= "";
       }

cout<<ans<<endl;




}*/
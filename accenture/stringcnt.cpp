#include<bits/stdc++.h>
using namespace std;


int main(){
queue<string>q;

string s = "Prasad Shantaram Botre";


string  temp = "";
for(auto i : s){
if(i == ' '){
    q.push(temp);
    temp = "";
}
if(i!= ' '){
temp = temp + i;
}

}
q.push(temp);
int ma = INT_MIN;
while(!q.empty()){

string f = q.front();
int len = f.length();
q.pop();

cout<<len<<endl;

}
}
#include<iostream>
#include<map>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main(){


//creation
unordered_map<string,int>m;

//insertion
pair<string,int>p = make_pair("pair",1);
m.insert(p);

//2

pair<string,int>pair2("Prasad",3);

m.insert(pair2);


m["pradynan"] = 5;

cout<<m["pradynan"]<<" "<<endl;

cout<<m.at("Prasad")<<" "<<endl;

//unknown 

cout<<m["rahul"]<<"  "<<endl;
cout<<m.at("rahul")<<"  "<<endl;

//to check presence 

cout<< m.count("Prasa")<<endl;

//erase

//cout<< m.erase("Prasad")<< endl;


for(auto i : m){
    cout<<i.first << "  "<< i.second <<endl;
}
unordered_map<string,int>:: iterator it = m.begin();

while(it != m.end()){

       cout<<it->first << "  "<< it->second <<endl;
       it++;
}

return 0;





}
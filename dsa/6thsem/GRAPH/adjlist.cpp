#include <bits/stdc++.h>
#include<iostream>
#include<list>
#include<map>
using namespace std;


class graph{

public:

unordered_map<int,list<int>>adj;

void addEdge(int u, int v, bool direction){
//dir = 0 -> undircted graph
//dir = 1 -> directed graph

adj[u].push_back(v);

if(direction == 0){
    adj[v].push_back(u);
}
}

void print(){

    for(auto i : adj){
        cout<<i.first<<"->>"<<endl;
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



};





int main(){


int n ;
cout<<"enter nodes";
cin>>n;

int m;
 cout<<"enter edge";
 cin>>m;

 graph g;
cout<<"enter u 7 v"<<endl;
 for(int i = 0;i<m ;i++){
    int u , v;
cin>>u>>v;
    g.addEdge(u,v,0);
 }

g.print();


}
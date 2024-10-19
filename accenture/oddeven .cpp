#include<bits/stdc++.h>
using namespace std;


int main(){


    vector<int>arr = {1,2,3,4,5,6,7,8,9};
string temp = "";
for(auto i : arr){
    if(i%2 == 0){
        temp+="even ";
    }
    else{
        temp+="odd ";
    }
}

cout<<temp<<"  "<<endl;

}
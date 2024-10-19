#include<bits/stdc++.h>
using namespace std;



int main(){

vector<int>arr = {122,12,24,35,9};
int divisor = 8 ;
 int remindere = 0;
 int quantient = 3;

for(int i = 0 ;i < arr.size();i++){

if(arr[i]/divisor == quantient && arr[i]%divisor == remindere){
    cout<<i<<" ";
}
cout<<endl;

}





}
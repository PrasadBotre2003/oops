#include<iostream>
using namespace std;

int main(){
int n;
int i =2;
cin>>n;
while(i<n){
	if (n%i==0){
		cout<<"no is prime"<<i<<endl;
	}
	else{
		cout<<"prime"<<endl;
	}
	i = i+1;
}
	return 0;
}
	
	
	


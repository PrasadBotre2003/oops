#include<iostream>
using namespace std;
int main(){
/*int n;
cin>>n;
int i =1;
while(i<=n){
	int j = 1;
	while(j<=n){
		cout<<"*";
	j++;	
	}
	i++;
	cout<<endl;
	
}
*/
int n;
cin>>n;
int i = 1;
while(i<=n){
	int j = 1;
	while(j<=i){//trangel pattrn
	//cout<<i;
	cout<<"*";
	j++;
}	
	cout<<endl;
i =i+1;
	
}
}

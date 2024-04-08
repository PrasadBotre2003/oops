#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int row = 1;
while(row<=n){
	int col = 1;
   int space = n - row ;
	while(col<=space){
		cout<<" ";
		col++;
}

	while(space<n){
		cout<<"*";
		space++;
		
}
	cout<<endl;
		row++;
		


}
}


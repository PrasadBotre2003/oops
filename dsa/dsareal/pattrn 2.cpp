#include<iostream>
using namespace std;

int main(){
	/*  int n;
	  cin>>n;
	  int i = 1;
	  while(i<=n){
	  	int j =1;
	  	while(j<=i){
	  		
	  		cout<<(i-j+1)<<" ";
	  		j++;
		  }
	  	cout<<endl;
	  	i++;
	  }
	AAA
	BBB
	CCC*/
	int n;
cin>>n;
 int row = 1;
 
 while(row<=n){
 	int col = 1;
 	while(col<=n){
	 
 	char ch = 'a'+ row+col-2;
 	cout<<ch;
 	col++;
 }
	cout<<endl;
	row++;
	
	
}
}

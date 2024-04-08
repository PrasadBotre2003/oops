#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int row = 1;
 
	while(row<=n){
		
	
			int col = 1;
			char v = 'A' + row -1;
		while(col<=row){
	   
	
			
	       cout<<" ";
		   
		   cout<<v;
		   v = v + 1;
	      
			col++;
			
			}
	     
      
		cout<<endl;
			row++;
	}
			
			
			
			
			
			
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
	

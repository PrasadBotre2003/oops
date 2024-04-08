#include<iostream>
using namespace std;
int  main(){
		int first,second;
		cin>>first>>second;
		if(second == 0){
			cout<<first<<endl;
		}
		else{
			int ans = first - second;
			int p = ans / (second + 1);
			
			if(ans % (second + 1) != 0){
				p++;
			}
			cout<<p<<endl;
		}
		
	
}



	



#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cout<<"enter two no";
	cin>>a>>b;
{
	try{
		if(b==0)
		throw b;
		else{
			c = a/b;
			cout<<c<<endl;
			
		}
	}
catch (int d){
	cout<<"cannot devide by ero"<<endl;
}
return 0;
}



	
}

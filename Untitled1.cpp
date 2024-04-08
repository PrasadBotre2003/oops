#include <iostream>
using namespace std;
int main(){
	
	int book[4];
	book[0]=10;
	book[1]=50;
	book[2]=60;
	book[3]=90;	
//	cout<<book[0]<<endl;
//	cout<<book[1]<<endl;
//	cout<<book[2]<<endl;
//	cout<<book[3]<<endl;
//for(int i=0;i<=n;i++){

//	cout<<i<<endl;
	
//}
int *p=book;
cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+2)<<endl;
	cout<<*(p+3)<<endl;
	
	
	

	
}

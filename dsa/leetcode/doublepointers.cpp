#include<iostream>
using namespace std;

int main(){
int  p= 5;
int * ptr = &p;
int **ptr1 = &ptr;	
cout<<&p<<endl;
cout<<&ptr<<endl;
	cout<<ptr<<endl;
	cout<<ptr1<<endl;
	cout<<**ptr1<<endl;
	
	
}

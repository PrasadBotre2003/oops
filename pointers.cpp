#include<iostream>
using namespace std;
int main(){
	int a = 4;
	int *ptr = &a;
	cout<<"the value of a is"<<*(ptr)<<endl;
	
	int *p = new int(55);
	cout<<"value is."<<*(p)<<endl;
	
	int *arr = new int[3];
	arr[0]=100;
	arr[1]=200;
	arr[2]=300;
	cout<<"value of arr[0]"<<arr[0]<<endl;
		cout<<"value of arr[1]"<<arr[1]<<endl;
			cout<<"value of arr[2]"<<arr[2]<<endl;
	
	
	
	return 0;
	
}

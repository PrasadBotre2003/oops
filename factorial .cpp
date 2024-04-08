#include<iostream>
using namespace std;
 
int factorial(int n);
int fibo(int n);
int main(){
	cout<<"enter no ";
	int n;
	cin>>n;
	cout<<"factorial of no"<<factorial(n)<<endl;
	cout<<"fibbonachi no"<<fibo(n)<<endl;
	return 0;	
}
int factorial(int n){
if(n<=1){
return 1;
}
return n * factorial(n-1);

}
int fibo(int n){
	
	if(n<2){
		return 1;
		}
		return fibo(n-2)+fibo(n-1);
	
} 





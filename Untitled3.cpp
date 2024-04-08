#include<iostream>
using namespace std;
  
class A{
 public:

int abc(int a,int b,int c){
	
	
	return a*b*c;
}
	double abc(double a,double b, double c){
		
		return a+b+c;
		}
	};
	
	
	int main(){
	A p;
cout<<p.abc(9,8,8)<<endl;
	cout<<p.abc(1.1,3.3,1.1)<<endl;
	
	
	

	return 0;
}

#include<iostream>
using namespace std;

class complex { 
	int a,b;
	public:
		void setdata(int n1,int n2){
		a=n1;
		b=n2;	
		}
		friend complex sumcomplex (complex o1,complex o2);
		void printnumber(){
			cout<<"your no is"<<a<<"+"<<b<<"i"<<endl;
		}
	   };
	   complex sumcomplex(complex o1,complex o2){
	   	
	   	complex o3;
	   	o3.setdata((o1.a+ o2.a),(o1.b + o2.b));
	   	return o3;
	   }
	   	
	   
	   
	   
	   int main(){
	   	complex c1,c2,sum;
	   	c1.setdata(10,12);
	   	c2.setdata(1,2);
		   c1.printnumber();
		   c2.printnumber();
	   
	   sum = sumcomplex(c1,c2);
	   sum.printnumber();
	   return 0;
	   }	

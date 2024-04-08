#include<iostream>
using namespace std;

class A{
	int a,b;
	public:
		
		A(int,int);
			void printdata(){
				cout<<a<<"+"<<b<<"i"<<endl;
				}
			};
A::A(int c,int d){
     a=c;
     b=d;
}
	int main(){
		A p(7,12);
		
		A q = A(9,12);
		q.printdata();
	
		p.printdata();
		
		return 0;
		}

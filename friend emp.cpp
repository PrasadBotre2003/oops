#include<iostream>
using namespace std;
class B;
class A{
	
	int data;
	public:
		setvalue(int value){
			data = value;
			}
			friend void add(A,B);
	};
class B{
	
	int num ;
	public:
		setvalue(int value){
			num = value;
			}
			friend void add(A,B);
};

 void add(A o1,B o2){
 	cout<<o1.data + o2.num;
 }
 int main(){
 	A q;
 	q.setvalue(3);
 	
 	B e1;
 	e1.setvalue(4);
 	add(q,e1);
 	return 0;
 	
 	
 }

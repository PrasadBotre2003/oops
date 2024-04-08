#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(){
		a=0;
		}
		number(int num){
			a=num;
			}
			
	//	number(number &obj){
	//	cout<<"copy constructer colled"<<endl;
	//		a=obj.a;
	//		}
			
			
			void display(){
				cout<<"the no of object is "<<a;
			}
	
	
};
int main(){
	number a,b(1000),c(511);
	a.display();
		b.display();
			c.display();
	
	number a1(b);
	a1.display();
	return 0;
	
}

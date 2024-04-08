#include<iostream>
using namespace std;

class A{
	protected:
		int rollnumber;
		public:
			void setrollnumber(int);
			void getrollnumber(void);
			
};

void A:: setrollnumber(int r){
	rollnumber = r;
	
}
void A::getrollnumber(void){
	cout<<"roll no is "<< rollnumber <<endl;
	
}
class B:public A{
	protected:
	float math;
	float physics;
		public:
			
		void setmarks(float,float);
			void getmarks(void);
};
void B::setmarks(float a,float b) {
math = a;
physics = b;	
}
void B::getmarks(void)
{
	cout<<math<<physics<<endl;
	
}

class result:public B{
	public:
		void display(){
		void getrollnumber();
		void getmarks();
		
			cout<<"persantage"<<(math+physics/2)<<endl;
		}
};
int main(){
	result a;
	a.setmarks(12.1,2.22);
	a.setrollnumber(12);
	
	a.display();
	
	 return 0;
}

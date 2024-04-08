#include<iostream>
using namespace std;

class student {
	protected:
		int rollno;
		public:
			void setnumber(int a){
				rollno = a;
			}
			void show(){
				cout<<"roll no is"<<rollno<<endl;
			}
			
};
class test :virtual public student{
	protected:
	float math,physics;
	public:
		setmarks (float m1,floatm2){
			math = m1;
			physics = m2;
			}
			void display(){
				cout<<""
			}
		
};
int main(){
	
}

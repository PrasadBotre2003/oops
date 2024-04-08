#include<iostream>
using namespace std;

class student {
	protected:
		int rollno;
		public:
			void getno(int a){
				rollno = a;
				}
				void show(){
					cout<<"roll no is "<<rollno<<endl;
					}
};
class test:  public virtual student{
protected:
	float math,physics;
	public:
		void setmarks(float m1,float m2){
			math= m1;
			physics=m2;
		}
         void display(){
         	cout<<"math"<<math<<"physics"<<physics<<endl;
		 }
};

class sport : public virtual student{
	protected:
	float s;
	public:
		void sports(float sc){
			s = sc;
			
		}
		void print(){
			cout<<"sport marls is"<<s<<endl;
		}
};
class result : public test, public sport{
	protected:
	float total;
	public:
    void display1(void){
		
		total = math + physics + s;
		void show();
		void display();
		void print();
		cout<<"total score is"<<total<<endl;
}
};
int main(){
result balu;
balu.getno(15);
balu.show();

balu.setmarks(15.4,48.2);
balu.display();
balu.sports(55);
balu.display1();
balu.show();
	return 0;
	}

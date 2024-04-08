#include<iostream>
using namespace std;

class base1{
	int data;
	public:
		base1(int a){
			data = a;
			cout<<"base 1 constructer is called"<<endl;
			
		}
		void display2(){
			cout<<"value of data is"<<data<<endl;
		}
};

class base2{
	int data1;
	public:
		base2(int a){
			data1 = a;
			cout<<"base 2 constructer is called"<<endl;
			
		}
		void display1(){
			cout<<"value of data is"<<data1<<endl;
		}
};

class derived : public base1,public base2{
	int derived1, derived2;
	public:
		derived(int a,int b,int c,int d):base1(a),base2(b){
			derived2 = c;
			derived1 =d;
	    cout<<"derived constructer is called"<<endl;
		}
};
int main(){
	derived a(2,3,5,6);
	a.display1();
	a.display2();
	return 0;
}

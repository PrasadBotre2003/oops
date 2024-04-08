#include<iostream>
using namespace std;

class base{
	int data1;
	public:
		int data2;
		int  setdata();
		int  getdata1();
		int getdata2();
};

int base :: setdata(void){
	data1=20;
	data2=60;
}
int base ::getdata1(){
	return data1;
}

int base ::getdata2(){
	return data2;
	
}
class derived : private base {
	int data3;
	public:
		void processs();
			void display();
	};
	void derived :: processs(){
			setdata();
			getdata1();
			getdata2();
		data3 = data2* getdata1( );
		}
		void derived :: display(){
			cout<<getdata1()<<endl;
			cout<<data2<<endl;
			cout<<data3<<endl;
		}
		int main(){
			derived d;
		
			d.processs();
			d.display();
			return 0;		}

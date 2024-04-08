#include<iostream>
using namespace std;

class base1{
public:
	void greet(){
		cout<<"how's the josh"<<endl;
	}
};

class base2{
public:
	void greet(){
		cout<<"hai serrr"<<endl;
		
	}
};

class derived : public base1,public base2{
	public:
	void greet(){
		base2::greet();
	}
};

class A{
	public:
		void say(){
			cout<<"i am the king "<<endl;
		}
};
class B : public A{
	void say(){
		cout<<"no one can match me"<<endl;
	}
};
int main(){
	base1 a;
	base2 b;
	derived d;
	a.greet();
	b.greet();
	d.greet();
	A s;
	B v;
	s.say();
	v.say();
	return 0;
	
}

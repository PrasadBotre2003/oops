#include<iostream>
using namespace std;
class input {
	public:
	int a,b,c;
		
	input(){
		cout<<"enter 1st number"<<endl;
		cin>> a;
			cout<<"enter 2nd number"<<endl;
		cin>>b;
	}
	};
	class addition :public input{
	public:
	int c;
		addition(){
		c = a+b;
		cout<<"addition of number is = "<<c<<endl;
	}	
};
class multiplication : public input{
	public:
		multiplication(){
			c = a*b;
			cout<<"multiplication of number is = "<<c<<endl;
			}
};
class division : public input{
	public:
		division(){
			c = a/b;
			cout<<"division of number is = "<<c<<endl;
			}
};
class subtraction : public input{
	public:
		subtraction(){
			c = a-b;
			cout<<"subtraction of number is = "<<c<<endl;
			}
};
int main(){
input a;
addition b;
multiplication c;
division d;
subtraction s;
return 0;	
}

#include<iostream>
using namespace std;

class base1 {
protected:
	int base1;
public:
	void set(int a){
		base1 = a;
	}
};
class base2{
	protected:
		int base2;
		public:
			void set1(int b){
				base2 = b;
				}
};
class derived : public base1,public base2{
	public:
		void display(){
		
			cout<<"value of base1"<<base1<<endl;
				cout<<"value of base"<<base2<<endl;
					cout<<base1+base2<<endl;
		}
	
};
int main(){
	derived a;
	a.set(5);
	a.set1(9);
a.display();
	return 0;
}

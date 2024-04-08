#include<iostream>
using namespace std;

class A{
	int a;
	public:
		void setdata(int a){
			this->a=a;
			}
			void getdata(){
				cout<<"value of a is "<<a<<endl;
			}
	};
			
			int main(){
				A  a;
				a.setdata(3);
				a.getdata();
			}


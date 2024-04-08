#include<iostream>
using namespace std;

class specifier{
	protected:
		int a;
		private:
			int b;
			};
			
			class derived : public specifier{
				
			};
			int main(){
				specifier s;
				derived d;
				d.a = 10;
				d.b = 20;
				return 0;
			}

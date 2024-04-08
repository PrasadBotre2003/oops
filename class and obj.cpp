#include<iostream>
using namespace std;

class A {
	string s;
	
	public:
		void fun1();
		void fun2();
		};
		
		void A::fun1(void){
			cin>>s;
		}
		
		void A::fun2(void){
			for(int i = 0;i < s.length();i++){
				if(s.at(i)!='0'&&s.at(i)!='1'){
					
				cout<<"incorrect binary format"<<endl;
				
				}
			}
		}
			 int main(){
			 	
			 	A p;
			 	p.fun1();
			 	p.fun2();
			 	
			 	return 0;
			 }
		
		
		
	

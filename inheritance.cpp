#include<iostream>
using namespace std;
class employe {
	
	public:
		int id;
		float salary;
		employe(){}
		employe(int inpid){
			id = inpid;
			salary = 34;
			}
		};
			class progammer: employe
			{
				public:
				progammer(int inpid){
					id = inpid;
				}
				int languagecode=10;
			void getdata(){
				cout<<id<<endl;
			}
			};
			
			


int main(){
	employe a(1),b(2);
	cout<<a.salary<<endl;
	cout<<b.salary<<endl;
	progammer c(100);
cout<<c.languagecode<<endl
c.getdata();
	return 0;
}

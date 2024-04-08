#include<iostream>
using namespace std;

class sum{
public:
	int a,b,c;
	sum(int a,int b){
		
		int c=a+b;
		cout<<"sum of two integer"<<c<<endl;
		}
		
		sum(double a,double b= 2.43){
			double c =a+b;
				cout<<"sum of two float"<<c<<endl;
			}
			sum(int a){
				b=10;
				int c =a+b;
					cout<<c<<endl;
			}
			};
			
			int main(){
				sum s(1.21);
				return 0;
				
				
			}

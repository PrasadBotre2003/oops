#include<iostream>
using namespace std;
class test{
	
	int b;
	int a;
	public:
		test(int c,int d):a(c+b),b(5*d+a)
		{
			cout<<"constructer is ecutd"<<endl;
			cout<<"value a is"<<a<<endl;
			cout<<"value b is"<<b<<endl;
			
		}
};
int main(){
	test t(3,5);
	return 0;
}

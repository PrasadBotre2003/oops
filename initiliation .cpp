#include<iostream>
using namespace std;

class test{
	int a;
	int b;
	int c;
	public:
		test(int q,int t):a(q),b(t){
			cout<<"value a and b"<<a<<b<<endl;
		}
};
int main(){


test f(3,6);
return 0;
}

#include<iostream>
using namespace std;
template<class T>
class A{
public:
	T a;
	T b;
	T c;

		void add(T b,T c){
		}
		 T a = T b + T c;
		cout<<"addition of b + c is"<<a<<endl;
	}
};
int main()
{
	A <float> a;
	a.add(4,5);
	return 0;
}

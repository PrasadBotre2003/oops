#include<iostream>
using namespace std;
template<class T> 
class p{
	public:
	T  *arr;
	int size;
   p (int m){
   
		size = m;
		arr = new T [size];
	}
	T dotproduct(p &v){
		T d = 0;
		for(int i=0; i< size;i++)
		{
			d += this->arr[i] * v.arr[i];
			
			
		}
		return d;
	}
	
};
int main(){
	p <double> v1(3);
	v1.arr[0] = 4.2;
	v1.arr[1] = 3.4;
	v1.arr[2]= 1.6;
	p<double> v2(3);
		v2.arr[0] = 0.1;
		v2.arr[1] = 0.6;
		v2.arr[2] =1.1;
			double a = v1.dotproduct(v2);
			
				cout<<a<<endl;
				return 0;
			}
	


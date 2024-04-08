#include<iostream>
using namespace std;
class B;
class A{
int val;
friend void swap(A &,B &);
public:
	void indata(int a){
		val = a;
		}
		void display(){
			cout<<"value of class A is"<<val<<endl;
		}
		};
		
class B{
int abc;
friend void swap(A &,B &);
public:
	void indata(int a){
		abc = a;
		  }
    void display(){
	    cout<<"value of class A is"<<abc<<endl;
		 }
		 };
		
		
		void swap(A &a,B &b){
			int temp = a.val;
			a.val = b.abc;
			temp = b.abc;
			
		}
		int main(){
			A q;
			B e;
			q.indata(5);
			e.indata(9);
			void swap(&q,&e);
			return 0;
		}

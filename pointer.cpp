#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
		void setdata(int a,int b){
	     real = a;
		 img = b;
	}
	
		void getdata(){
			cout<<"real PART IS"<<real<<endl;
			cout<<"img part"<<img<<endl;		
}
};
	int main() {
		complex p;
		
		complex *ptr = new complex[4 ];
        ptr->setdata(5,4);	
		ptr->getdata();
		return 0;
		
}
	
	
	
	
	
	
	


#include<iostream>
using namespace std;

class shop{
	int id;
	float prise;
	public:
		 void setdata(int a,float b){
             	id = a;
	            prise  = b;
		}
		
	void getdata(){
		cout<<"id"<<id<<endl;
		cout<<"prise"<<prise<<endl;
	}	
};

int main(){
 int a = 2;
 int p;
 float q;

 shop *ptr = new shop[a];
 shop *ptrtemp = ptr; 
 for(int i = 0;i<=a;i++){
 cout<<"enter id and prise of item"<<i+1<<endl;
 cin>>p>>q;
 //*(ptr).setdata(p,q);
ptr->setdata(p,q);
 }
for(int i=1;i<=a;i++){
cout<<"item no"<<i+1;
	ptrtemp->getdata();
	ptrtemp++;
}


	return 0;
}

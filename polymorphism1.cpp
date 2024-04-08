#include<iostream>
using namespace std;

class Baseclass{
	public: 
	
	int varbase;
	void display(){
		cout<<"var base is"<<varbase<<endl;
	}
};
class Derivedclass:public Baseclass{
	public:
		int varderived;
		void display(){
			cout<<"var derived is"<<varderived<<endl;
		}
	
};
int main(){
Baseclass *baseclasspointer; 	
Baseclass objbase;
Derivedclass objderived;
baseclasspointer = &objderived;	//pointing to derivved class
baseclasspointer->varbase = 100;
baseclasspointer->display();
//baseclasspointer->varderived = 500; will throw error
baseclasspointer->varbase = 5000;
baseclasspointer->display();
Derivedclass *derivedclasspointer;
derivedclasspointer = &objderived;
derivedclasspointer ->varderived = 450;
derivedclasspointer->display();
	
	
	
	
	return 0;
	
	
}

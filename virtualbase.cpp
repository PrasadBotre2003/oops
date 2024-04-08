#include<iostream>
using namespace std;

class Baseclass{
	public: 
	
	int varbase = 10;
	virtual void display(){
		cout<<"var base is"<<varbase<<endl;
	}
};
class Derivedclass:public Baseclass{
	public:
		int varderived = 50;
		void display(){
			cout<<"var derived is"<<varderived<<endl;
		}
	
};

int main(){
	Baseclass *baseclasspointer;
	Baseclass objbase;
	Derivedclass objderived;
	baseclasspointer = &objderived;
	baseclasspointer->display();
	return 0;
	
}

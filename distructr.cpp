#include<iostream>
using namespace std;
int count = 0;

class num{
public:
	num(){
		count++;
		
		cout<<"constructer is called"<<count<<endl;
	}
	~num(){
		cout<<"distructer is called"<<count<<endl;
		count--;
		}
	};
		int main(){
			num a;
			{
				num c,d;
				
			}
			return 0;
			
			
		}
	
	
	
	


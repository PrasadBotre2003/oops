#include <iostream>
#include <fstream>
using namespace std;
int main(){
string st = "prasad bahi";
//ofstream out("prasad.txt");
//out<< st;
string st2;
ifstream in("prasad1.txt");
//in>>st;
getline(in,st2);
//getline(in,st2);
cout<<st2<<endl;


	return 0;
}

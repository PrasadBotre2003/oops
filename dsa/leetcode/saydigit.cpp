#include<iostream>
using namespace std;
void say(string s[],int n){
	if(n==0){
		return;
	}
	
	int digit = n%10;
n = n/10;
cout<<s[digit]<<endl;
say(s,n);
cout<<s[digit]<<endl;
	
	
	
}

int main(){
		string s[] = {"zero","one","two","three","four","five","si","seven","eight",
		
		"nine"};
		
	say(s,412);
}

#include<iostream>
#include<string>
using namespace std;
bool isvalid(char ch){
		if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0'&&ch<='9')){
			return 1;
		}
		else{
			return 0;
		}
}

char issmall(char ch){
	if((ch>='a' && ch<='z')||(ch>='0'&&ch<='9'))
		return ch;
	else{
		char temp ;
		temp = ch - 'A' + 'a';
		return temp;
	}
}
//Z
void  isplain(string s){
	int a = 0;
		int n = s.length();
	int b = n -1;

		for(int i = 0;i<n;i++){
		if(issmall(s[a]) == issmall(s[b])){
			a++;
			b--;
		
			cout<<"1";
			
		}
		else{
		
			cout<<"0";
	}
	
}
}
int main(){
	string s = "Noon";
	string temp;
for(int i = 0;i<s.length();i++){
	if(isvalid(s[i])){
		temp.push_back(s[i]);
	}

}

for(int j = 0;j<temp.length();j++){
	temp[j] = issmall(temp[j]);
	}

}
 
 isplain(temp);

return 0;
}
	
	



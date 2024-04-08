#include<iostream>
using namespace std;

char ma(string s){
	int arr[25] = {0};
	for(int i = 0;i<s.size();i++){
		char ch = s[i];
		int number = 0;
		number = ch - 'a';
		
		arr[number]++;
		}

int m = -1;
int ans;
for(int i = 0;i<26;i++){
	if(m<arr[i]){
		ans = i;
		m = arr[i];
	}
	}
	char res = 'a'+ ans;
return res;
}
int main(){
	
	string s;
	cin>>s;
	cout<<ma(s)<<endl;
}

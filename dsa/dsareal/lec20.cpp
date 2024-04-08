#include<iostream>
using namespace std;
vector<int>reverse(vector<int> v){
	
	int s = v.size() - 1;
	for(int i = s;i>=0;i++){
		cout<<v[i];
	}
	cout<<endl;
}


int main(){
 vector<int> v;
 v.push_back(10);
  v.push_back(1);
  v.push_back(12);
  v.push_back(9);
  v.push_back(80);
   v.push_back(6);
   int ans  = vector(v);	
}

#include<iostream>
#include<list>
using namespace std;
// list
void display(list<int> &lst){
	list<int> ::iterator it;
	for(it=lst.begin();it != lst.end();it++){
		cout<<*it<<" "<<endl;
	}
}
	
int main(){
	list<int> list1;
	list1.push_back(1);
		list1.push_back(2);
			list1.push_back(3);
				list1.push_back(4);
			list<int>:: iterator iter;
			iter = list1.begin();
			cout<<*iter<<" "<<endl;
			iter++;
				cout<<*iter<<" "<<endl;
			iter++;
				cout<<*iter<<" "<<endl;
			iter++;
				cout<<*iter<<" "<<endl;
			iter++;
			
	
}
























/* vector
#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> &v){
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	}
int main(){
	vector<int> vec1;
	int element,s;
	cout<<"enter element"<<endl;
     cin>>s;
          for(int i = 0;i<s;i++){
       cout<<"enter element in vectoer:";
          	cin>>element;
	vec1.push_back(element);
	}
  vector<int> :: iterator iter = vec1.begin();
vec1.insert(iter,50,233);
   //vec1.pop_back();
	display(vec1);
}*/

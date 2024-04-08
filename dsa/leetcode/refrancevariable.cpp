#include<iostream>
using namespace std;
void update(int n){
	n++;
}
void updateref(int & n){
	n++;
}

int sum(int *arr,int n ){
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum+= arr[i];
	}
	return sum;
}


int main(){
	
/*	int i  =5;
	int &j = i;
	j++;
	i++;
	cout<<i<<endl;
	
	int i = 5;
cout<<i<<endl;
updateref(i);
cout<<i<<endl;


char ch = 'c';
cout<<sizeof(ch)
<<endl;

char *ptr = &ch;

cout<<sizeof(ptr)
<<endl;


int a = 5;
*/
int n;
cin>>n;

int *arr = new int[n];

for(int i  = 0;i<n;i++){
	cin>>arr[i];
}

cout<<sum(arr,n)<<endl;


}

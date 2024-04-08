#include<bits/stdc++.h>
using namespace std;
void insertatpos(vector<int> &v ,int a){
	int s = 0;
	int e = v.size() - 1;
	int mid = s + (e - s)/2;
	int ans = 0;
	while(s<=e){
		
		if(v[mid] >= a){
			ans = mid;
			e = mid -1;
		}
		else{
			s = mid +1;
		}
		 mid = s + (e - s)/2;
	}
	cout<<ans<<endl;
}

int main(){
	vector<int> v {2,3,4,6,7,8,9};
	insertatpos(v,5);
	
}

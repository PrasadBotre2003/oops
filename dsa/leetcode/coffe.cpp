#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void display(vector<int>v,int n){
   for(auto &p : v){
      cout<<p<<" ";
  }

}
int main() {
  int f;
 int n ;
  cin>>n;
  int b;
  vector<int>v;

  for(int i=0 ; i<n ; i++)
  {
      cin>>b;
      v.push_back(b);
  }
  cout<<"input"<<endl;
display(v,n);
  cin>>f;
  cout<<"print f"<< f<<endl;
   int point  = v[f];
  
  cout<<"position"<<point<<endl;
  int tr = 1;
  while(tr == 1){
    int cnt = 1;
  int m = *max_element(v.begin(), v.end());
cout<<"ma ele"<<m<<endl;

  if(point == m){
    tr = 0;
    cout<<cnt<<endl;
  }
cout<<v[m]<<endl;

  v.erase(max_element(v.begin(), v.end()));
    display(v,n);
    for(int i = 0;i<v.size();i++){
      v[i] = v[i] + 1;
    }
  v.size();
    cnt++;

  }



    return 0;
}


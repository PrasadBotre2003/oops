#include<bits/stdc++.h>
using namespace std;

/*
void getStringUtils(int k,char str[],int n){

if(n == k){
 str[n] = '\0' ;
        cout << str << " ";
        return ;
}
if(str[n-1] == '('){
    str[n] = ')';
    getStringUtils(k,str,n+1);
}

if(str[n-1] == ')'){
    str[n] = ')';
    getStringUtils(k,str,n+1);
    str[n] ='(';
    getStringUtils(k,str,n+1);
}



}





void genrateAllString(int k){
if(k<0){
    return;
}

char str[k];

str[0] = '(';
getStringUtils(k,str,1);

str[0] = ')';
getStringUtils(k,str,1);



}
*/
//pattrn1
	int  printf(int arr[],int n, int sum,  int inde ,int s){
	    if(inde == n){
	        
	    
	    if(s == sum){
	       return 1;
	        
	    }
	    else{
	         return 0;
	    }
	    
	   
	    
	    }
	 
        s += arr[inde];
     int l =    printf(arr, n, sum, inde + 1, s);
        
        // Backtrack: Exclude the current element
        s -= arr[inde];
    
      int r =  printf(arr, n, sum, inde + 1, s);
	    
	    return l + r;
	}
	
//pattrn2

bool  printS(int inde,vector<int>&ds,int s,int sum,vector<int>&arr,int n){
    if(inde == n){
        if(s == sum){
for(auto it :ds)cout<<it<<"  ";
cout<<endl;
return true;
        }
        else{
  return false;
        }
      
    }
ds.push_back(arr[inde]);
s+=arr[inde];
if(printS(inde+1,ds,s,sum,arr,n) == true){
    return true;
}
s-=arr[inde];
ds.pop_back();

if(printS(inde+1,ds,s,sum,arr,n)==true)return true;

return false;






}


int main(){
vector<int>arr{
22 17 19 46 48 27 22 39 20 13 18 50 36 45 4 12 23 34 24 15 42 12 4 19 48 45 13 8 38 10 24 42 30 29 17 36 41 43 39 7 41 43 15 49 47 6 41 30 21 1 7 2 44 49 30 24 35 5 7 41 17 27 32 9 45 40 27 24 38 39 19 33 30 42 34 16 40 9 5 31 28 7 24 37 22 46 25 23 21 30 28 24 48 13 };
int n = 94;
int sum = 84   ;

vector<int>ds;
printS(0,ds,0,sum,arr,n);


}
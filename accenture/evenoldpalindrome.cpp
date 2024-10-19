#include<bits/stdc++.h>
using namespace std;
#define MOD 10000000007;

void solve(string s, int n) {
	int st = 0 ;

	int maxlen  = 1 ;

//odd


	for (int k = 0 ; k < n ; k++) {



		int i  = k ;
		int j = k;


		while (i >= 0 && j < n) {

			if (s[i] == s[j]) {

				i--;
				j++;
			}
			else {
				break;
			}
			int len = j  - i - 1;

			cout << i << " " << j << " " << len << endl;
			if (len > maxlen) {
				maxlen = len;
				st = i + 1;
			}


		}





	}
	cout << "second part" << endl;
//even
	for (int k = 0 ; k < n ; k++) {



		int i  = k ;
		int j = k + 1;


		while (i >= 0 && j < n) {

			if (s[i] == s[j]) {

				i--;
				j++;
			}
			else {
				break;
			}
			int len = j  - i - 1;


			cout << len << endl;
			if (len > maxlen) {
				maxlen = len;
				st = i + 1;
			}


		}





	}




	cout << s.substr(st, maxlen) << endl;




}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s = "cbcbbc";
	int n = s.length();
	solve(s, n);


	return 0;
}

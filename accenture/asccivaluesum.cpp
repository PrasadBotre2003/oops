#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j , string &s1 , string &s2, int n , int m, string len , string &longestlen) {


	if (i >= n || j >= m) {

		if (len.length() > longestlen.length()) {
			longestlen = len;
		}



		return ;
	}


	if (s1[i] == s2[j]) {

		len.push_back(s1[i]);

		solve(i + 1, j + 1, s1, s2, n, m, len, longestlen);

		len.pop_back();

	}


	solve(i + 1, j, s1, s2, n, m, len, longestlen);

	solve(i , j + 1, s1, s2, n, m, len, longestlen);


}

int main() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif



	string s1 = "adventure";
	string s2 = "future";

	int n = s1.length();
	int m = s2.length();
	int i = 0;
	int j = 0;
	string len = "";
	string longestlen = "";

	solve(0, 0, s1, s2, n, m, len, longestlen);
	int ans = 0;
	for (auto i : longestlen) {

		int a = i;

		ans += a;
	}
	cout << ans << endl;

	cout << longestlen << endl;


}



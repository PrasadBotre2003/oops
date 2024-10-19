#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	unordered_map < char, int>nmap;
	string s = "THIS IS NOT A INTEGER VALUE";

	string ovels = "aeiouAEIOU";


	for (auto i : ovels) {

		nmap[toupper(i)] = 0;


	}

	for (auto i : s) {

		if (nmap.find(i) != nmap.end()) {
			nmap[i] ++;


		}


	}

	for (auto i : nmap) {
		//cout << i.first << " " << i.second << endl;
	}

	int maxcnt = 0;

	char ch = '\0';

	for (auto i : nmap) {
		if (i.second > maxcnt) {

			maxcnt = i.second;
			ch = i.first;
		}
		else if (maxcnt == i.second  && i.second > 0 ) {

			if (i.first < ch) {

				ch = i.first;
			}
		}


	}

	cout << ch << endl;

}

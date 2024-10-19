#include<bits/stdc++.h>
using namespace std;
#define MOD 10000000007;







int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int num = 5 ;
	int cnt = 0;


	while (num) {

		if (num & 1) {
			cnt++;
		}
		num = num >> 1;



	}

	cout << cnt << endl;


	cout << (pow(2, cnt) - 1 ) << endl;
}

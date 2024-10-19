

#include<bits/stdc++.h>
using namespace std;
int solve(int n , int k ) {

	if (n  == 0) {
		return 0;
	}
	return (solve(n - 1, k) + k) % n;



}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif



	int n = 5 ;
	int k = 2 ;
	int winner = 1;
	for (int i = 2 ; i <= n ; i++) {

		winner = ( winner + (k - 1)) % i + 1;
	}
	cout << winner << endl;

}
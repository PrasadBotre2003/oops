#include<bits/stdc++.h>
using namespace std;

int findMinK(vector < vector<int>>&arr, int n) {

	for (int k = 0 ; k   < n ; k++) {
		bool flag = true;



//check row

		for (int i = 0 ; i < n ; i++) {

			if (i != k && arr[k][i] != 0) {

				flag = false;
				break;
			}




		}





//check col

		for (int i = 0 ; i < n ; i++) {

			if (i != k && arr[i][k] != 0) {

				flag = false;
				break;
			}




		}











		if (flag) {

			return k;
		}


	}





	return -1;

}

int main() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif



	int n = 5;
	vector<vector<int>> mat = {
		{0, 1, 0, 9, 4},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{8, 0, 0, 0, 4}
	};

	int result = findMinK(mat, n);
	cout << result << endl;
}



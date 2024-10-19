#include<bits/stdc++.h>
using namespace std;



int main() {


#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	int x1 , y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3 ;
	int y3;

	int x4;
	int y4;




	if (x1 == x2) {



		x3 = x1 + (y2 - y1);
		y3 = y2;

		x4 = x2 + (y2 - y1);
		y4 = y1;

	}
	else if (y1 == y2) {

		x3 = x1;
		y3 = y1 + (x2 - x1);

		x4 = x2;
		y4 = y2 + (x2  - x1);


	}
	else {


		x3 = x1 ;
		y3 = y2;
		x4 = x2;

		y4 = y1;




	}


	cout << "X3  " << x3 << " " << "y3  " << y3 << " " << "x4  " << x4 << " " << "y4  " << y4 << endl;

}



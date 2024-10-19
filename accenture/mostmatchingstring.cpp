#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif


	vector<string> arr = { "scooter" , "monitor", "greater", "shutter"};
	string word = "matter";



	unordered_map < string, int>nmap;
	for (int i = 0 ; i < arr.size(); i++) {


		string temp = arr[i];
		int cnt = 0;
		cout << temp << endl;
		int len = temp.length() - word.length();
		int i1 = temp.length() - 1;
		int j1 = word.length() - 1;

		for (int j = 0; j < word.size(); j++) {

			if (temp[i1 - j ] == word[j1 - j]) {
				cnt++;
			}
			//cout << cnt << endl;
		}
		cout << cnt << endl;
		nmap[temp] = cnt;





	}

	string best_match = "";
	int max_count = 0;

	for (auto it : nmap) {
		if (it.second > max_count) {
			max_count = it.second;
			best_match = it.first;

		}

		else if (it.second == max_count && it.first.length() < best_match.length()) {
			best_match = it.first;
		}



	}


	cout << "Best match: " << best_match << endl;
}


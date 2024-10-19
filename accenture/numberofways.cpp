#include<bits/stdc++.h>
using namespace std;
int factorial(int num) {

    if (num == 0) {
        return 1;
    }


    return num * factorial(num - 1);

}

bool isovels(char ch) {

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

        return false;
    }
    return true;

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif

    string s ;
    cin >> s;
    int n = s.length();
    int  consonet = 0 ;
    unordered_map <char, int>nmap;
    for (auto i : s) {

        if (isovels(i)) {
            nmap[i]++;

            consonet++;
        }
    }

    int f1 = factorial(consonet);


    for (auto i : nmap) {

        f1 /= i.second;
    }





    cout << f1 << endl;
}


#include <iostream>
#include <set>
#include <vector>

using namespace std;
/*#include <iostream>
#include <set>
#include <string>

using namespace std;

void generateSubstrings(string &s, int start, int end, set<string> &substrings) {
    if (end == s.length()) {
        return;
    } else if (start > end) {
        generateSubstrings(s, 0, end + 1, substrings);
    } else {
        substrings.insert(s.substr(start, end - start + 1));
        generateSubstrings(s, start + 1, end, substrings);
    }
}

int countDistinctSubstrings(string s) {
    set<string> substrings;
    generateSubstrings(s, 0, 0, substrings);
    return substrings.size();
}

int main() {
    cout << countDistinctSubstrings("aaaaa") << endl;
    cout << countDistinctSubstrings("z") << endl;
    cout << countDistinctSubstrings("ababa") << endl;

    return 0;
}
*/
void solve1(int inde, int n, string s, set<string> temp, vector<set<string>>& pq) {
    if (inde == n) {
        pq.insert(temp);
        return;
    }

    temp.insert(s.substr(inde, 1));
    solve1(inde + 1, n, s, temp, pq);
    temp.erase(s.substr(inde, 1));
 
    solve1(inde + 1, n, s, temp, pq);
}
/*void solve(int inde, int n, string s, set<string> temp, vector<set<string>>&pq) {
    if (inde == n) {
        ans.insert(temp);
        return;
    }

temp.insert(s[inde])
    solve(inde+1, n, s, temp, pq);
    if(inde>0 && s[inde] != s[inde-1]){
        temp.erase(1,inde) ;
    }
 
    solve(inde + 1, n, s, temp, pq);
}*/


int main() {
    string s = "ababa";
set<string>temp;
vector<set<string>>pq;
    vector<string> ds;
    int inde = 0;
    int n = s.length();

    solve1(inde, n, s, temp, pq);




int cnt = 0;
    for (auto i : pq) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout <<cnt++<< endl;
    }


    

    return 0;
}

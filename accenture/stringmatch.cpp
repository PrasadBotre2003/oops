#include<bits/stdc++.h>
using namespace std;
/*#include <bits/stdc++.h>
using namespace std;

string findBestRhyme(vector<string>& arr, string input) {
    int maxSuffixLength = 0;  // Maximum length of the matching suffix
    string bestMatch = "";    // Best matching word

    for (string s : arr) {
        int suffixLength = 0;
        int s_len = s.length();
        int input_len = input.length();
        
        // Compare suffixes from the end of the strings
        for (int j = 1; j <= min(s_len, input_len); j++) {
            if (input[input_len - j] == s[s_len - j]) {
                suffixLength++;
            } else {
                break;
            }
        }

        // Update the best match based on suffix length and string length
        if (suffixLength > maxSuffixLength ||
            (suffixLength == maxSuffixLength && s.length() < bestMatch.length())) {
            maxSuffixLength = suffixLength;
            bestMatch = s;
        }
    }

    return bestMatch;
}

int main() {
    vector<string> arr = {"gender", "blender", "blunder", "under"};
    string input = "thunder";

    string result = findBestRhyme(arr, input);
    cout << "The best rhyme is: " << result << endl;

    return 0;
}
*/
void solve(vector<string>&arr,string input){
int malen = 0;
int inputlen = input.length();
string ans = "";
for(string  i : arr){
int ilen = i.length();

//
int len = 0 ;
for(int j  = 0 ; j < min(inputlen,ilen);j++){

if(input[inputlen - j] == i[ilen-j] )
{len++;
}else{
    break;
}

}

if(len>malen){
ans = i;
}
}


cout<<ans<<endl;

}
int main(){


 vector<string> arr = {"gender", "blender", "blunder", "under"};
    string input = "thunder";

solve(arr,input);
}
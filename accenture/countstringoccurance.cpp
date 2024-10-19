#include <iostream>
#include <string>
using namespace std;
int countOccurrences(string str, string word) {
int cnt = 0;

int len = str.length();

int wordlen =  word.length();
for(int  i = 0 ;i < (len - wordlen) ; i++){
bool ispossible = true;
for(int j = 0 ; j < wordlen;j++){

 if (str[i + j] != word[j]) {
                ispossible = false;
                break;
}
}

  if (ispossible && (i == 0 || str[i - 1] == ' ') && 
            (i + wordlen == len || str[i + wordlen] == ' ' || str[i + wordlen] == '.')) {
            cnt++;
        }

}



return cnt;
}
bool ismatch(string str, string word){

for(int i = 0 ;i < str.length();i++){
    if(str[i] != word[i]){
        return false;
    }
}

return true;






}
int solve(string &str,string &word){

int cnt = 0 ;


int len = str.length();

int wordlen =  word.length();
int n = len - wordlen;
for(int i = 0 ;i <= n;i++){

string s = str.substr(i,wordlen);
if(ismatch(s,word)){
cnt++;
}


}
cout<<cnt<<endl;
return cnt;

}



int main() {
    string input = "This is a test. This test is simple. This is a sample test.";
   string wordToCount = "test";

    int occurrences = solve(input, wordToCount);
    
    cout << "The word '" << wordToCount << "' appears " << occurrences << " times." << std::endl;

    return 0;
}
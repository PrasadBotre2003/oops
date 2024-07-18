#include<iostream>
using namespace std;

class TrieNode{
    public:
char data;
TrieNode * childern[26];

bool TerminalNode;
TrieNode(char ch){
data = ch;
for(int i = 0;i<=25;i++){
    childern[i] = NULL;
}
TerminalNode = false;
}
};

class Trie{
public:
TrieNode * root;

Trie(){
    root = new TrieNode('\0');
}
void insertutils(TrieNode * root,string  word){
//base case

if(word.length() == 0){
    root->TerminalNode = true;
    return ;
}
//assume all word are capital 

int index = word[0] - 'A';
TrieNode * child ;

//already present 
if(root->childern[index]!=NULL){

child = root->childern[index];

}
else{
    child = new TrieNode(word[0]);
root->childern[index] = child;
    
    }
 

insertutils(child,word.substr(1));
}


void insertword(string word){
    insertutils(root,word);
}



bool searchutils(TrieNode * root,string word){
if(word.length() == 0){
    return root->TerminalNode ;
    }
int index = word[0] - 'A';
TrieNode* child;
//present
if(root->childern[index] != NULL){
    child = root->childern[index];
}
else{
    //absent 
    return false;
}


return searchutils(child,word.substr(1));
}

bool serch(string word){
   return searchutils(root,word);
}
void removeN(TrieNode * root,string word){


if(word.length() == 0){
    root->TerminalNode = false;
    
    return ;
}
//assume all word are capital 

int index = word[0] - 'A';
TrieNode * child ;

//already present 
if(root->childern[index]!=NULL){

child = root->childern[index];

}
else{
  return;
    
    }

removeN(child,word.substr(1));

}
void removeNode(string word){
    removeN(root,word);
}

};

int main(){

Trie * t =  new Trie();

t->insertword("MANGO");
t->insertword("APPLE");
t->insertword("FRUIT");
t->insertword("FU");
cout<<"present word  "<<t->serch("FU")<<endl;
t->removeNode("FU");
cout<<"present word  "<<t->serch("FU")<<endl;
    return 0;
}
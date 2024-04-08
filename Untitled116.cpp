#include <iostream>
#include<fstream>
/* file handling related classes are in fstream header */
using namespace std;
void file_copy (char *f1, char *f2) 
//char pointers f1 and f2 will hold address of first filename(src) and second filename (dest)
{
//we need to create object of ifstream class as we want to read contents from file 
//another obj of ofstream class to write contents to dest file
ifstream fin;
ofstream fout;
char ch;
fin.open(f1);
fout.open(f2);
ch=fin.get();
while(!fin.eof())
{  
fout<<ch;
ch=fin.get();
}
fin.close();
fout.close();
}
int main() {
  file_copy("prasad.txt","prasad1.txt");
   cout<<"prasad botre"<<endl;
   cout<<"file copied";
   return 0;
}




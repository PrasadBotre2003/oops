  #include <cstring>   
    #include <iostream>
 	using namespace std; 
 	class Mystring { 
 	    char* str; 
 	    char s1[20]; 
 	public: 
 	    Mystring(); 
 	    Mystring(char* val); 
 	    ~Mystring() { delete str; } 
 	    void display(); 
 	    void accept(); 
 	}; 
 	void Mystring::display() 
 	{ 
 	        cout << str << endl; 
 	} 
 	void Mystring::accept() 
 	{ 
 	        cout<<"Enter the string"<<endl; 
 	        cin.get(s1,20); 
 	        strcpy(str,s1); 
 	} 
 	Mystring::Mystring() 
 	{ 
 	    str = new char[1]; 
 	    str[0] = '\0'; 
   }
 	Mystring::Mystring(char* val) 
 	{ 
 	    if (val == NULL) { 
 	        str = new char[1]; 
 	        str[0] = '\0'; 
 	    } 
 	    else { 
 	        str = new char[strlen(val) + 1]; 
 	        strcpy(str, val); 
 	    } 
 	}
 	int main() 
 	{ 
 	    Mystring a; 
 	    a.accept(); 
 	    cout<<"PRASAD BOTRE"<<endl;
		 cout<<"String accepted is::"; 
 	    a.display(); 
 	    char temp[] = "Hello"; 
 	    Mystring b(temp); 
 	    cout<<"String passed is::"; 
 	    b.display(); 
 	    return 0; 
 	} 


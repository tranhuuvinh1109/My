#include<iostream>
#include<cstring>
#include"MyString.h"
using namespace std;



char myString::operator[](const int index)
{
    return p[index];
}
myString::myString()  // default constructor
{
    p = new char[1];
    strcpy(p, "");
}
myString::~myString(){
	delete [] p;
}



ostream & operator<<(ostream & out,const myString& s){
    out << s.p;
    return out;
}
istream & operator >> (istream & in, myString & s){
    int size;
    cout << "Enter length of word: " << endl;
    cin >> size;
    s.size = size;
    s.p = new char[s.size+1];
    for (int i = 0; i < s.size; i++){
    in >> s.p[i] ;
    }
    s.p[s.size] = '\0';
    return in;
 }
 
bool myString::operator==( const myString &str ) { 
        return strcmp( p, str.p ) == 0; 
    }

bool myString::operator!=( const myString &str ) { 
        return strcmp( p, str.p ) != 0; 
    }
bool myString::operator>( const myString &str ) { 
        return strcmp( p, str.p ) > 0; 
    }

bool myString::operator<( const myString &str ) { 
        return strcmp( p, str.p ) < 0; 
    }

bool myString::operator<=( const myString &str) {
        return strcmp( p, str.p ) <= 0; 
    }  

bool myString::operator>=( const myString &str) {
        return strcmp( p, str.p ) >= 0; 
    }  


myString::myString(const char* inString) // parameterized constructor
{
    p = new char[strlen(inString) + 1];
    strcpy(p, inString);
}

myString &myString::operator=(const myString &source){
    size = source.size;
    p = new char[size + 1];
    strcpy(p, source.p);
    return *this;
}

myString operator + (const myString& str1, const myString& str2)
{
    myString temp;
    delete [] temp.p;
    temp.p = new char[strlen(str1.p) + strlen(str2.p) + 1];
    strcpy(temp.p, str1.p);
    strcat(temp.p, str2.p);

    return temp;


}


#include<iostream>
using namespace std;
class myString{
	private:
		char *p;
		int size;
	public:
        myString();//ham dung mac dinh								//ok roi
		myString(const myString & );								//ok roi
		~myString(); 												//ok roi
		myString(const char * source);								//ok roi
		myString & operator = (const myString &); 					//ok roi
		friend myString operator + (const myString& leftOp, const myString& rightOp); 					//ok roi
		friend ostream& operator <<(ostream& ,const myString&); 	//ok roi
    	friend istream& operator >>(istream& ,  myString&);   	 	//ok roi
    	bool operator==( const myString & );
    	bool operator!=( const myString & );
    	bool operator<( const myString & );
    	bool operator>( const myString & );
    	bool operator<=( const myString & );
    	bool operator>=( const myString & );
    	char operator [] (const int ); 
    	
};
   // notes counter mini project 



#include<iostream>
using namespace std ;

int main ()
{
	int amount;
	cout << " Ener the amount :";
	cin >> amount ;
	
	// here we have notes of 100 , 50 , 20 , 10 
	
	int a = 100 ;
	int b = 50;
	int c = 20;
	int d = 10 ;
	
	switch( 1 ){
		
		case 1 : a = amount / 100;
		         amount = amount % 100;
		         cout << "no. of notes of 100's :" << a << endl;
		         
		case 2 : b = amount / 50;
		         amount = amount % 50;
		         cout << "no. of notes of 50's :" << b << endl;
		         
	    case 3 : c = amount / 20;
		         amount = amount % 20;
		         cout << "no. of notes of 20's :" << c << endl;
		         
		case 4 : d = amount / 10;
		         amount = amount % 10;
		         cout << "no. of notes of 10's :" << d << endl;
		         
		         
	
	}
	
	
	
	
}

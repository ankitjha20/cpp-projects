// Mini calculator using switch case 

#include<iostream>
using namespace std ;

int main ()
{
	int a , b ;
	cout << "Enter the value of a :";
	cin >> a ;
	
	cout << "Enter the value of b :";
	cin >> b ;
	
	char op ;
	cout << "Enter the opertaion :";
	cin >> op ;
	
	switch( op )
	{
		case '+' : cout << (a + b) << endl ;
		break;
		
		case '-' : cout << (a - b) << endl ;
		break;
		
		case '*' : cout << (a * b) << endl ;
		break;
		
		case '/' : cout << (a / b) << endl ;
		break;
		
		case '%' : cout << (a % b) << endl ;
		break;
		
		default : cout << "Enter a valid operaton " << endl ;
		
	}
	
}

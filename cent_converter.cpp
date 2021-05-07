/* 
	Cent Converter.
	Given a user input of type int display the denominations that can be returned to the user.
*/
#include <iostream>
using namespace std;

int main()
{
	int cents;
	int dollars;
	int quarters;
	int nickels;
	int dimes;
	int pennies;
	int remainder;
	
	cout << "Enter the amount of cents you have:" << endl;
	cin >> cents;
	
	if(cents <= 0 ){
		cout << "Enter a valid amount of cents." << endl;
	} else {
		
		dollars = cents / 100;
		remainder = cents % 100;
		
		quarters = remainder / 50;
		remainder %= 50;
		
		dimes = remainder/10;
		remainder %= 10;
		
		nickels = remainder / 5;
		remainder %= 5;
		
		pennies = remainder;
		
		cout << "I can give you change in:" << endl;
		cout << "Dollars: " << dollars << endl;
		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << pennies << endl;
	}
	
	
	return 0;
}

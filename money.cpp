//Header file section
#include <iostream>
using namespace std;

//Program begins with a main function
int main()
{
	const int HUNDRED_DOLLAR = 100;
	const int TWENTY_DOLLAR = 20;
	const int TEN_DOLLAR = 10;
	const int FIVE_DOLLAR = 5;
	const int ONE_DOLLAR = 1;
	double QUARTER = .25;
	double DIME = .10;
	double NICKEL = .05;
	double PENNY = .01;
	int dollar_amount;
	
	//enter dollar amount
	
	cout << "Enter Amount: ";
	cin >> dollar_amount;
	
	cout << " Number of 100 dollar bills: " << (int)dollar_amount / HUNDRED_DOLLAR << endl;
	dollar_amount = dollar_amount % HUNDRED_DOLLAR;

	cout << " Number of 20 dollar bills: " << (int)dollar_amount / TWENTY_DOLLAR << endl;
	dollar_amount = dollar_amount % TWENTY_DOLLAR;

	cout << " Number of 10 dollar bills: " << (int)dollar_amount / TEN_DOLLAR << endl;
	dollar_amount = dollar_amount % TEN_DOLLAR;

	cout << " Number of 5 dollar bills: " << (int)dollar_amount / FIVE_DOLLAR << endl;
	dollar_amount = dollar_amount % FIVE_DOLLAR;

	cout << " Number of 1 dollar bills: " << (int)dollar_amount / ONE_DOLLAR << endl;
	dollar_amount = dollar_amount % ONE_DOLLAR;

	cout << " Number of quarters: " << (double)dollar_amount / QUARTER << endl;
	dollar_amount = dollar_amount * QUARTER;

	cout << " Number of dimes: " << (double)dollar_amount / DIME << endl;
	dollar_amount = dollar_amount * DIME;

	cout << " Number of nickels: " << (double)dollar_amount /NICKEL << endl;
	dollar_amount = dollar_amount * NICKEL;

	cout << " Number of pennies: " << (double)dollar_amount /PENNY << endl;
	dollar_amount = dollar_amount * PENNY;


	return (0);
}

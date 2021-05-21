#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double tendered{};
	double cost{};
	int total{}, fifties{}, twenties{}, tens{}, fives{}, dollars{},
		quarters{}, dimes{}, nickels{}, pennies{};

	//This Is The User Input
	cout << "Enter amount of purchase: " << endl;
	cin >> cost;
	cout << "Enter amount of tendered: " << endl;
	cin >> tendered;
	//I wanted this number to hold the total
	total = (tendered - cost) * 100;
	cout << "Your change is a total of: $" << total / 100 << endl;
	//This Is To Calculate The 50's
	fifties = total / 5000;
	cout << "Your total amount fifties is: " << fifties << endl;
	//This Is To Calculate The 20's
	total = total % 5000;
	twenties = total / 2000;
	cout << "Your total amount twenties is: " << twenties << endl;
	//This Is To Calculate The 10's
	total = total % 2000;
	tens = total / 1000;
	cout << "Your total amount tens is: " << tens << endl;
	//This Is To Calculate The 5's
	total = total % 1000;
	fives = total / 500;
	cout << "Your total amount fives is: " << fives << endl;
	//This Is To Calculate The 1's
	total = total % 500;
	dollars = total / 100;
	cout << "Your total amount ones is: " << dollars << endl;
	//This Is To Calculate The Quarters
	total = total % 100;
	quarters = total / 25;
	cout << "Your total amount quarters is: " << quarters << endl;
	//This Is To Calculate The Dimes
	total = total % 25;
	dimes = total / 10;
	cout << "Your total amount dimes is: " << dimes << endl;
	//This Is To Calculate The Nickels
	total = total % 10;
	nickels = total / 5;
	cout << "Your total amount nickels is: " << nickels << endl;
	//This Is To Calculate The Pennies
	total = total % 5;
	pennies = total / 1;
	cout << "Your total amount pennies is: " << pennies << endl;
	return 0;
}

/*
<<<<< Your Average Run Will Look Like >>>>>>

Enter amount of purchase:
#
Enter amount tendered:
#
Your total change is: #
Your total amount of fifties is: #
Your total amount of twenties is: #
Your total amount of tens is: #
Your total amount of fives is: #
Your total amount of ones is: #
Your total amount of quarters is: #
Your total amount of dimes is: #
Your total amount of nickels is: #
Your total amount of pennies is: #
*/



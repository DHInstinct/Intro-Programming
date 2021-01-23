/*
Daniel Hartley
Assignment 2 part 2
Date completed 2/5/19
Date due 2/6/19
*/

#include <iostream>

using namespace std;

int main()
{

	int quarters = 0, nickels = 0, dimes = 0, pennies = 0;


		
	cout << "How many quarter do you have? " ;
	cin >> quarters;

	cout << "How many nickels do you have? " ;
	cin >> nickels;

	cout << "How many dimes do you have? " ;
	cin >> dimes;

	pennies = (quarters * 25) + (nickels * 5) + (dimes * 10);

	cout << "Your change is worth a total of " << pennies << " pennies! ";
	cout << "Thats about " << pennies / 60 << " Dollars!" << endl;


	return 0;

}
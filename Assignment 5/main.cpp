/*
Daniel Hartley
Assignment 5
Date Started: 3/9/19
Date Complete: 3/12/19
*/
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	//Variables 
	int choice = 0;
	int x = 0;
	int y = 0;

	while (choice != 6) //loops the program until choice is not equal to 6 
	{

		cout << "\n";

		cout << "Please pick a Mathmatical operator " << endl;
		// Menu of Mathematical operators
		cout << "1: Addition " << endl;
		cout << "\n";
		cout << "2: Subtraction " << endl;
		cout << "\n";
		cout << "3: Division " << endl;
		cout << "\n";
		cout << "4: Multiplication " << endl;
		cout << "\n";
		cout << "5: Exponet " << endl;
		cout << "\n";
		cout << "6: Exit " << endl;

		//how to choose option
		cin >> choice;


		// Switch statement including the math and statements
		if (cin.fail())
		{
			cout << "Please try again " << endl;
			switch (choice)
			{
			case 1: // Addition
				cout << "Please enter 2 numbers " << endl;
				cin >> x;
				cin >> y;
				cout << "The answer is: " << x + y << endl;
				break;

			case 2: // Subtraction
				cout << "Please enter 2 numbers " << endl;
				cin >> x;
				cin >> y;
				cout << "The answer is : " << x - y << endl;
				break;

			case 3: // Divide
				cout << "Please enter 2 numbers " << endl;
				cin >> x;
				cin >> y;
				cout << "The answer is : " << x / y << endl;
				break;

			case 4: //Mult
				cout << "Please enter 2 numbers " << endl;
				cin >> x;
				cin >> y;
				cout << "The answer is : " << x * y << endl;
				break;

			case 5: //Exponet
			{
				cout << "Please enter the base followed by the power " << endl;
				cin >> x;
				cin >> y;

				int answer = 1;
				for (int i = 0; i < y; ++i)
				{
					answer *= x;
				}
				cout << "The answer is : " << answer << endl;
				break;
			} //End of case 5 scope

			case 6: // to break out of switch case
				break;

			default:  // The else of the switch statement
				cout << "That wasn't a choice, Please try again " << endl;

			}

		}// end of while loop

	}


	
	return 0;
}
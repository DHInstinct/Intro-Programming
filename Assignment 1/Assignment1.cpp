/*
Daniel Hartley
Due date:1-25-19
Date completed: 1-16-19
Assignment one
*/
#include <iostream>

using namespace std;

int main()
{
	int test1, test2, test3, test4, test5;

		cout << "Enter 5 test scores separated by spaces:";

	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	double average = (test1 + test2 + test3 + test4 + test5) / 5.;

	cout << "The average is: " << average;

	cout << endl;

	return 0;
}
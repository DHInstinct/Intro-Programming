#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name1;
	string name2;
	string name3;
	double run1Time = 0;
	double run2Time = 0;
	double run3Time = 0;
	double first = 0;
	double second = 0;
	double third = 0;

	cout << "Please enter a name for 3 runners! Then how long "
		<< "it took them to run the race in minutes.seconds " << endl;
	cin >> name1;
	cin >> name2;
	cin >> name3;
	cin >> run1Time;
	cin >> run2Time;
	cin >> run3Time;
	
	//Data Validation
	while (run1Time < 0 || run2Time < 0 || run3Time < 0)
	{
		cout << " Please enter a positive value" << endl;
		cin >> run1Time;
		cin >> run2Time;
		cin >> run3Time;
	}

	cout << "The name of Runner one is: " << name1 << endl;
	cout << " It took " << name1 << " " << run1Time << " to complete the race" << endl;
	cout << "\n";
	cout << "The name of Runner two is: " << name2 << endl;
	cout << " It took " << name2 << " " << run2Time << " to complete the race" << endl;
	cout << "\n";
	cout << "The name of Runner three is: " << name3 << endl;
	cout << " It took " << name3 << " " << run3Time << " to complete the race" << endl;
	cout << "\n";

	//To tell which one came in 1st
	if (run1Time < run2Time && run1Time < run3Time)
	{
		first = run1Time;
	cout << name1 << " came in 1st with the time: " << first << endl;
	}
	else if (run2Time < run1Time && run2Time < run3Time)
	{
		first = run2Time;
		cout << name2 << " came in 1st with the time: " << first << endl;
	}
	else if (run3Time < run1Time && run3Time < run2Time)
	{
		first = run3Time;
		cout << name3 << " came in 1st with the time: " << first << endl;
	}
	
	//To tell which one came in 2nd
	if (run1Time < run3Time && run1Time > run3Time)
	{
		second = run1Time;
		cout << name1 << " came in 2nd with the time: " << second << endl;
	}
	else if (run2Time < run3Time && run2Time > run1Time)
	{
		second = run2Time;
		cout << name2 << " came in 2nd with the time of: " << second << endl;
	}
	else if (run3Time > run2Time && run3Time < run1Time)
	{
		second = run3Time;
		cout << name3 << " came in 2nd with the time of: " << second << endl;
	}
	
	//To tell which one came in 3rd
	if (run1Time > run2Time && run1Time > run3Time)
	{
		third = run1Time;
		cout << name1 << " came in 3rd with the time: " << third << endl;
	}

	else if (run2Time < run1Time && run3Time < run2Time)
	{
		third = run2Time;
		cout << name2 << " came in 3rd witht the time: " << third << endl;
	}

	else if (run3Time > run1Time && run3Time > run2Time)
	{
		third = run3Time;
		cout << name3 << " came in 3rd with the time: " << third << endl;
	}

	return 0;
}
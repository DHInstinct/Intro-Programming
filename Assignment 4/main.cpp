#include <iostream>
#include <string>

using namespace std;

int main()
{
	double fatCal = 0;
	double totalCal = 0;
	double fatGrams = 0;

	cout << "Please type in the total number of Calories, followed by the fat grams in that food! " << endl;

	cin >> totalCal;
	cin >> fatGrams;

	fatCal = fatGrams * 9;


	double percentageFat = (fatCal / totalCal) * 100;

	cout << " Percentage fat is: " << percentageFat << " %" << endl;

	//To show if fat grams is greater than total cals
	while (fatCal > totalCal || percentageFat >= 100 || totalCal < 0 || fatGrams < 0 || fatCal <= 0)
	{
		cout << "Invalid... Please try again! " << endl;
		percentageFat = 0;
		cin >> totalCal;
		cin >> fatGrams;
		percentageFat = (fatCal / totalCal) * 100;
	}


	//To show if food item is low fat or not
	if (percentageFat <= 30)
		cout << "This food is Low-Fat! \n";
	else
		cout << "Not Low Fat! \n";
	return 0;
}
/*
Daniel Hartley
Assignment 8
Date Started : 4/20/19
Date Complete: 4/22/19
*/


#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

void Randomize(int Array[], const int size)
{
	for (int i = 0; i < size; ++i)// loops through the size of array you pick
	{
		Array[i] = rand() % 100 + 1;//randomly picks number between 1 and 100
		cout << Array[i] << endl;
	}
	
}

int LargestIndex(int Array[], const int size) // Finds the largest Number and tells you the index
{
	int maxIndex = 0; 
	for (int currentIndex = 1; currentIndex < size; ++currentIndex)
	{
		if (Array[currentIndex] > Array[maxIndex])
			maxIndex = currentIndex;
	
	}
	return maxIndex;

}


int main()
{
	srand(time(0));// makes  random number different everytime

	int Array[10];
	Randomize(Array, 10);
	
	cout << "********" << endl;
	cout << "The Largest Number is in index: " << LargestIndex(Array, 10) << endl; // Tells which index the Highest Number is in
	cout << "********" << endl;

	string StudentNames[10] = {"Ethan", "Dylan", "William", "Carl", "Zane", "Nic",
	"Alston", "Isaac", "Keegan", "Owen", };

	int StudentGrades[10] = { 50, 45, 77, 74, 24, 88, 99, 66, 42, 89 };

	cout << "The Student that has the Highest grade is: " << StudentNames[LargestIndex(StudentGrades, 10)]; // Tells which student got the highet grade
	cout << endl;
	cout << "The Largest Grade is in Index: " << LargestIndex(StudentGrades, 10);// Tells which index the highest grade is located in
	cout << endl;

	return 0;
}
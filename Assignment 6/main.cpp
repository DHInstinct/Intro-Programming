/*
Daniel Hartley
Assignment 6
Date Started - 4/1/19
Date complete - 
I worked With Jordan Young on this project
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
const int PI = 3.14;

// Print Divider Funtion
void printDivider(string caption) 
{
	cout << "*****Testing " << caption << " Function*****";
	
}
void printDivider(string caption, string optionalSpace)//Function Overload to have an Optional Space
{
	cout << endl << "*****Testing " << caption << " Function*****" << endl;
}

void isVowel() //Function that tells if letter is a Vowel or not
{
	cout << "Please enter a Letter and I'll tell you if it is a Vowel or not" << endl;
	char letter;
	cin >> letter;

	if (toupper(letter) == 'A' || toupper(letter)== 'E' || toupper(letter) == 'I' || toupper(letter) == 'O' || toupper(letter) == 'U') {
		cout << letter << " is a Vowel!" << endl;
	}
	else {
		cout << letter << " is not a Vowel!" << endl;
	}
	
}


int F2C(int f)//Fahrenheit To Celsius
{
	int c;
	return (c = (f - 32) * 5 / 9);
}
int C2F(int c)// Celsius to Fahrenheit
{
	int f;
	return (f = c * 9 / 5 + 32);
}
int C2K(int cel)// Celsius To Kelvin
{
	int k;
	return (k = cel + 273.15);

}
int Far2Kel(int f)//Fahrenheit To Kelvin
{
	int C = F2C(f);
	 C = C2K(f);
	return C;
}

//Function Overloading
//Sphere
double GetVolume(double radius)
{
	cout << "The Volume of the Sphere is: "
		<< 4 * PI * (pow(radius, 3) / 3) << endl;
	return (4 * PI * (pow(radius, 3) / 3));
}
//Cylinder
double GetVolume(double radius, double height)
{
	cout << "The Volume of the Cylinder is: "
		<< (PI * pow(radius, 2) * height) << endl;
	return (PI * pow(radius, 2) * height);
}
//Box
double GetVolume(double length, double height, double width)
{
	cout << "The Volume of the Box is: " 
		<< (width * length * height) << endl;
	return (width * length * height);
}

int main()//Main Function
{
	printDivider("isVowel"); //Pass through another string parameter if you wish to have an optional space
	cout << "\n";
	isVowel();
	
	printDivider("Tempature Conversions", "\n");

	cout << "32 F to C is: " << F2C(32) << endl;
	cout << "32 C to F is: " << C2F(32) << endl;
	cout << "32 C to K is: " << C2K(32) << endl;
	cout << "32 F to K is: " << Far2Kel(32) << endl;

	printDivider("Get Volume", "\n");
	GetVolume(1.0);
	GetVolume(1.0, 1.0);
	GetVolume(1.0, 1.0, 1.0);



	return 0;
}
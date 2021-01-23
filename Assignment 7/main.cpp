/*
Daniel Hartley
Assignment 7
Date Started: 4-5-19
Date complete: TBA
*/


#include <iostream>
#include <string>

using namespace std;

bool PasswordFunction(string password)
{
	bool hasUpper = false;
	bool hasLower = false;
	bool hasSize = false;
	bool hasNum = false;
		
	for (int i = 0; i < password.size(); ++i) // checks the whole string
	{
		if (isupper(password[i])) // checks to see if there is a captial letter
		{
			hasUpper = true;
		}
		
		if (islower(password[i]))// checks to see if there is a lowercase letter 
		{
			hasLower = true;
		}
		
		if (password.size() >= 8) //checks to see if the string's lenth is above 8
		{
			hasSize = true;
		}
		
		if (isdigit(password[i])) // checks to see if the string has a number
		{
			hasNum = true;
		}
		
	}
	if (hasUpper == true && hasLower == true && hasSize == true && hasNum == true) // tells user when password is secure
	{
		cout << "Your password is secure!" << endl;
	}
	else
	{
		if (hasUpper == false) //tells user if password does not contain a captial letter
		{
			cout << "Your password does not contain a Captial Letter, Please try again." << endl;
		}

		if (hasLower == false)//tells user if the password does not contain a lowercase letter
		{
			cout << "Your password does not contain a Lowercase letter, Please try again. " << endl;
		}

		if (hasSize == false) // Tells the user if the password's length is long enough
		{
			cout << "Your password length is not long enough, Please try again. " << endl;
		}

		if (hasNum == false) // Tells the user if the password contains a number
		{
			cout << "Your password does not contain a number, Please try again." << endl;
		}
		return false;
	}
	
	return true;
	
}	


string extenisionFinder(string file)
{
	int findResult = file.find_last_of('.') + 0;
	if(findResult == file.npos)
		return"";

	return file.substr(file.find_last_of('.') + 0);


}

void CaptialLetters(string &sentence)
{
	sentence[0] = toupper(sentence[0]); // makes the first index of string captial

	for (int i = 0; i < sentence.size(); ++i) 
	{
		if (sentence[i] == ' ' &&  i != sentence.size() - 1)
		{
			sentence[i + 1] = toupper(sentence[i + 1]);
		}//end of if statement
	}//end of for loop
}

int main()
{
	string password;
	do 
	{
		cout << "Please Type in a password " << endl;
		getline(cin, password);
	} while (!PasswordFunction(password));
				  	  	 

	cout << endl << "*****************" << endl;

	//File Extenision function
	cout << "The file extenision is: " << extenisionFinder("testing.txt") << endl;
	cout << "The file extenision is: " << extenisionFinder("file.Extenisions.are.fun.exe") << endl;
	cout << "The file extenision is: " << extenisionFinder("return empty string") << endl;
	cout << endl << "*****************" << endl;

	string sentence;
	cout << "Please type in a sentence" << endl;
	getline(cin, sentence);
	CaptialLetters(sentence);
	cout << sentence << endl;

	return 0;
}
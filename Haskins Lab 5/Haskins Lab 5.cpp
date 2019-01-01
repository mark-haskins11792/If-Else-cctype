//Display number of letters, digits, and spaces in a string.	



#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;


int main()
{
	char input[] = "The 12 awesome oxen ambled quietly across 15 meters of lawn"; 
	int inputLength = strlen(input);
	cout << "The input: \n" << "\"" << input << "\"" << endl << endl;
	int nLetters = 0, nSpaces = 0, nDigits = 0;
	for (int i = 0; i <= inputLength - 1; i++) 
	{
		if (isalpha(input[i]))				
			nLetters++;						
		else if (isdigit(input[i]))
			nDigits++;						
		else
			nSpaces++;						
	}
	
	cout << "Input contains: \n" << inputLength << " characters \n" << nLetters << " letters \n" << nDigits << " digits \n" << nSpaces << " spaces \n" << endl;
	cout << "Input backwards: " << endl; 
	for (int i = inputLength - 1; i >= 0; i--)
	{
		cout << input[i];
	}
	cout << endl << endl;
	return 0;
}




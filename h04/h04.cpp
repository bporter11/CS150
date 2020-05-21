/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID
extern string ASSIGNMENT;

// Add your function declaration here


/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ***ANYTHING*** IN THIS FUNCTION

	cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result;
	if (credits <180)
	{
		result ="not graduating";
	}
	if (credits >= 180)
	{
		if (gpa >= 2.0 && gpa < 3.6)
		{
			result = "graduating";
		}
		else if (gpa >= 3.6 && gpa < 3.8 && honorsCredits < 15)
		{
			result = "cum laude";
		}
		else if (gpa >= 3.8 && honorsCredits < 15)
		{
			result = "magna cum laude";
		}
		else if (gpa >= 3.6 && gpa < 3.8 && honorsCredits >= 15)
		{
			result = "magna cum laude";
		}
		else if (gpa >= 3.8 && honorsCredits >= 15)
		{
			result = "summa cum laude";
		}
	else result = "not graduating";


	}
	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here

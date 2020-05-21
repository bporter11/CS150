/**
 *  @Brian Porter
 *  @09/06/2019 TTEVE
 *  @file h03.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "bporter11";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * User inputs grade and the program calculates the Grade Point average and prints it out.
 */
int run()
{   //1. Title and introduction
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Grade Caluclator" << endl;
    cout << string(50, '-') << endl;

    //2.Input Section
    string grade;
    cout << "Enter your letter grade: " << endl;
    getline(cin, grade);


    //3.processing section
    double gradePoints = -1;
    if (grade == "A") gradePoints = 4.0;
    else if (grade == "A-") gradePoints = 3.7;
    else if (grade == "B+") gradePoints = 3.3;
    else if (grade == "B") gradePoints = 3.0;
    else if (grade == "B-") gradePoints = 2.7;
    else if (grade == "C+") gradePoints = 2.3;
    else if (grade == "C") gradePoints = 2.0;
    else if (grade == "C-") gradePoints = 1.7;
    else if (grade == "D+") gradePoints = 1.3;
    else if (grade == "D") gradePoints = 1.0;
    else if (grade == "D-") gradePoints = 0.7;
    else if (grade == "F") gradePoints = 0;





    //4.output section
    string errorMessage;
    string invalidMessage;
    cout << fixed << showpoint << setprecision(1);
    if (gradePoints >= 0)
    {
        cout << "Grade Value is [" << gradePoints << "]" << endl;
    }
     else if (grade == "Z")
    {
        string errorInput = "INVALID LETTER GRADE";
        cout << "Grade Value is [" << errorInput << "]" << endl;
    }
    else if (grade == "A+" || grade == "F-")
    {
        errorMessage = "INVALID GRADE COMBINATION";
        cout << "Grade Value is [" << errorMessage << "]" << endl;
    }
    else if ((grade.size() >= 1) && (grade.at(0) != 'A' ||
    grade.at(0) != 'B' ||
    grade.at(0) != 'C' ||
    grade.at(0) != 'D' ||
    grade.at(0) != 'F'))
    {

        invalidMessage = "INVALID INPUT";
        cout << "Grade Value is [" << invalidMessage << "]" << endl;

    }









    return 0;
}

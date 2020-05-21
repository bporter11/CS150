 /**
 *  @author brian porter
 *  @date 09/25/2019
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h10.h"

// Place your function definitions in this file.
bool read(const string& agePrompt, int& age, bool check)
{
    string junk;
    cout << agePrompt;
    check = true;
    cin >> age;

    if (cin.fail())
    {
        cin >> junk;
        cin.clear();
        check = false;
    }
    if (isdigit(age))
    {
        check = true;
    }
    return check;
}

bool read(const string& gpaPrompt, double& gpa, bool check)
{
    string junk;
    cout << gpaPrompt;
    check = true;
    cin >> gpa;
    if (cin.fail())
    {
        cin.clear();
        cin >> junk;
        check = false;

    }
    else
    {
        cin.ignore(1024, '\n');
        check = true;

    }
    return check;


}

bool read(const string& namePrompt, string& name, bool check)
{
    cout << namePrompt;
    if (check == false)
    {
        cin >> name;

    }
    else
    {
        getline(cin, name);
    }



    return check;

}

bool read(char& ch, char dot)
{

    cin.get(ch);
    if (ch == dot)
    {
        return false;
    }
    else
    {
        return true;
    }
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // Uncomment the code below for informal testing
    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}


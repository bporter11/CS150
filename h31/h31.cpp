/**
    @file h31.cpp
    @author brian porter
    @version TTH eve
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h31.h"

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Add your implementation here
/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const string& s, const string& t)
{
    if (s.size() < t.size()) {return false;}
    if (s.substr(0, t.size()) == t)
    {
        return true;
    }
    else
    {
        return find(s.substr(1), t);
    }


}


////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}























/*

bool find(const string& s, const string& t)
{
    if (s.size() < t.size()) { return false; }
    else if (s.substr(0, t.size()) == t) { return true; }
    return find(s.substr(1) , t);
}

*/

/**
    @file h33.cpp
    @author brian porter
    @version TTH EVE
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h33.h"

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Add your implementation here
/**
    Compute recursively the number of times that sub appears inside
    str, without the substrings overlapping.

    @param str the string to search through.
    @param sub the string to look for.
    @return number of times that sub appears in str (without overlap).

    Here are some examples:
        subCount("catcowcat", "cat") returns 2
        subCount("catcowcat", "cow") returns 1
        subCount("catcowcat", "dog") returns 0

*/

int subCount(const string& s, const string& t)
{
    if (s.size() < t.size()) {return 0;}
    if (s.substr(0,t.size()) == t)
    {
        return 1 + subCount(s.substr(t.size()) , t);
    }
    else
    {
        return subCount(s.substr(1), t);
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
int subCount(const string& str, const string& sub)
{
    if (str.size() < sub.size()) return 0;
    if (str.substr(0, sub.size()) == sub) return 1 + subCount(str.substr(sub.size()), sub);
    return subCount(str.substr(1), sub);
}

*/


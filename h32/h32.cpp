/**
    @file 32.cpp
    @author brian porter
    @version TTH EVE
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h32.h"

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Add your implementation here
/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
string stringClean(const string& str)
{
    if (str.size() < 2) {return str;}
    string result;
    result += str.at(0);
    if (str.at(0) == str.at(1))
    {
        return stringClean(str.substr(1));
    }
    else
    {
        return result + stringClean(str.substr(1));
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

string stringClean(const string& str)
{
    if(str.size() < 2)
		return str;
	if(str.at(0) == str.at(1))
		return stringClean(str.substr(1));
	return str.at(0) + stringClean(str.substr(1));
}

*/
/**
 *  @author brian porter
 *  @date
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h08.h"

string zipZap(const string& str)
{
    string result;
    size_t i = 0;
    size_t len = str.size();
    if (len < 3)
    {
        result += str;
    }
    else
    {
        while (i < len - 2)
        {
            string word = str.substr(i,3);
            if (word.front() == 'z' && word.back() == 'p')
            {
                result += "zp";
                i+=3;
            }
            else
            {
                result += word.front();
                i++;
            }
        }
    }

    return result;



}
int countCode(const string& str)
{
    /*
    1. Extract first four characters (substring) of the input.
    2. If the string starts with "co" and it ends with 'e'
    Then add one to the counter
    3. Repeat for the next four characters. (This is a loop.)
*/
    int result = 0;
    if (str.size() >= 4)
    {
        for (size_t i = 0; i < str.size()-3; i++)
        {
            string word = str.substr(i,4);
            string front = word.substr(0,2);
            string back = word.substr(3);
            if (front == "co" && back == "e")
            {
                result++;
            }
        }
    }

    return result;
}
string everyNth(const string& str, int n)
{

    string result;
    for (size_t i = 0; i < str.size(); i+=n)
    {
        result += str.at(i);


    }
    return result;

}

bool prefixAgain(const string& str, int n)
{
    string prefix = str.substr(0,n);
    for (size_t i = 1;i < str.size(); i++)
    {
        string word = str.substr(i,n);
        if (word == prefix)
        {
            return true;
        }


    }
    return false;
}




////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
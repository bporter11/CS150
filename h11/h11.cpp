/**
 *  @author brian porter
 *  @date 10/01/2019
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{

    char ch;
    bool inSingleCmt = true;
    bool inString = true;
    bool inMultiCmt = true;
    while (cin.get(ch))
    {
        if (ch == '/' && cin.peek() == '*')
        {
            inMultiCmt = true;
        }
        if (ch == '*' && cin.peek() == '/')
        {
            inMultiCmt = false;
        }
        if (ch == '/' && cin.peek() == '/')
        {
            inSingleCmt = true;
            if (ch == '\n')
                inSingleCmt = false;
        }
        if (inSingleCmt == false)
        {
            cout << ch;
        }






    }



}


//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "/*"<<"this is a comment i think i am not sure" << "*/" << endl;
    strip();
    return 0;
}





















/*
void strip()
{

    bool inString = false;
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    char ch;

    while (cin.get(ch))
    {
            if (inSingleCmt == true && ch == '\n')
            {
            inSingleCmt = false;
            }
             else if (inString == true && ch == '"')
            {
            inString = false;
            }
            else if (inMultiCmt == true && ch == '*' && cin.peek() == '/')
            {
            cin.get(ch);
            cin.get(ch);
            inMultiCmt = false;
            }


            else if (!(inString) && !(inSingleCmt) && !(inMultiCmt))
            {
                if (ch == '\"')
                {
                inString = true;
                }
                else if (ch == '/' && cin.peek() == '*')
                {
                inMultiCmt = true;
                }
                else if (ch == '/' && cin.peek() == '/')
                {
                inSingleCmt = true;
                }

            }
            else if (inString && ch == '\\' && cin.peek() == '"')
            {
                cout.put(ch);
                cin.get(ch);
            }
            if (cin && !inSingleCmt && !inMultiCmt)
            {
            cout.put(ch);
            }



    }


}
*/

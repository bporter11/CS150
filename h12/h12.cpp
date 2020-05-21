/**
 *  @author brian porter
 *  @date 10/01/2019
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    char ch;
    while (cin.peek() != EOF)
    {
        while (cin.get(ch))
        {
            if (ch == ' ' && cin.peek() == ' ' ) {continue;}
            if (isdigit(cin.peek())) {break;}
            cout.put(ch);
        }
        cout << ", ";
        double total = 0.0;
        double temp;
        while (cin.get(ch))
        {
            if (ch == '\n')
            {
                break;
            }
            if (isdigit(ch))
            {
                cin.unget();
                cin >> temp;
                total += temp;
            }
        }




    }
    cout << fixed << setprecision(2) << total << "\n";


}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}


/*
void expense()
{

    char ch;
    while (cin.peek() != EOF)
    {
        while (cin.get(ch))
        {
            if (ch == ' ' && cin.peek() == ' ')
            {
                continue;
            }
            if (isdigit(cin.peek()))
            {
                break;
            }
            cout.put(ch);


        }
        cout << ", ";

        double temp;
        double total = 0.0;
        while (cin.get(ch))
        {
            if(isdigit(ch))
            {
                cin.unget();
                cin >> temp;
                total += temp;
            }
            if (ch == '\n')
            {
                break;
            }
        }
        cout << fixed << setprecision(2) << total << "\n";

    }


}
*/

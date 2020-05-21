/**
 *  @author Brian Porter
 *  @date 09/05/2019 TTEVE
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "bporter11";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{   //1. Title and introduction
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Time on My Hands" << endl;
    cout << string(50, '-') << endl;
    cout << "Give me a time (such as 3:57) and a duration \n"
            "(such as 1:05, and ill tell you the sum \n"
            "(that is, the time that follows the given time \n"
            "by the given duration), and difference (the time that \n"
            "precedes the given time by that duration). \n";

    //2. Input section, promt and input on same line
    int timeHours;
    int timeMinutes;
    cout << "        Time: " << timeHours << timeMinutes << endl;
    cin >> timeHours;
    cin.get();
    cin >> timeMinutes;
    int durationHours;
    int durationMinutes;
    cout << "        Duration: " << durationHours << durationMinutes << endl;
    cin >> durationHours;
    cin.get();
    cin >> durationMinutes;
    cout << endl;

    //3. Processing section -compute the results
    int time;
    int duration;
    int after;
    int before;
    int afterHours;
    int afterMinutes;
    int beforeHours;
    int beforeMinutes;


    time = (timeHours * 60) + timeMinutes + 1440;
    duration = (durationHours * 60) + durationMinutes;
    after = (time + duration) + 1440;
    before =  (time - duration) + 1440;
    afterHours = (((after / 60) - 1) % 12) + 1;
    afterMinutes = after % 60;
    beforeHours = (((before / 60 % 12) + 11) % 12) + 1;
    beforeMinutes = before % 60;
        if(beforeHours == 0){
            beforeHours += 12;
        }




    //4.output section : test data inside brackets
    cout << setfill('0');
    cout << "is ["
        << afterHours << ':' << setw(2) << afterMinutes << ", " << beforeHours << ":"
        << setw(2) << beforeMinutes << "]"
        << endl;
    cout << setw(2) << after / 60 % 12 << ":" << setw(2) << after % 60;




    return 0;



    return 0;
}

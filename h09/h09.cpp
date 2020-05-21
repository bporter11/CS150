/**
 *  @author brian porter
 *  @date 09/24/2019
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h09.h"

string codeForDigit(int digit)
{
    string bar;
    if (digit == 1)
    {
        bar = ":::||";
    }
    if (digit == 2)
    {
        bar = "::|:|";
    }
    if (digit == 3)
    {
        bar = "::||:";
    }
    if (digit == 4)
    {
        bar = ":|::|";
    }
    if (digit == 5)
    {
        bar = ":|:|:";
    }
    if (digit == 6)
    {
        bar = ":||::";
    }
    if (digit == 7)
    {
        bar = "|:::|";
    }
    if (digit == 8)
    {
        bar = "|::|:";
    }
    if (digit == 9)
    {
        bar = "|:|::";
    }
    if (digit == 0)
    {
        bar = "||:::";
    }
    return bar;

}

int checkDigit(int zip)
{
    int result = 0;
    int sum = 0;
    int i = 0;
    int mod = 10;

    if (zip < 10)
        {
            sum += (zip % 10);
            result += (10 - sum);
        }
    else
    {
        while (i <= 5)
        {
            sum += (zip % mod); // 1
            result += sum; // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            sum = 0;
            i++;
        }

        if (result % 10 == 0)
        {
            result = (sum % 10); // 8
        }
        else
        {
            result = result % 10;
            result = 10 - result;
        }

    }

    return result;
}

string barCode(int zip)
{
    string result;
    string barcode = "";
    int sum = 0;
    string bar1;
    string bar2;
    string bar3;
    string bar4;
    string bar5;


    int digit = checkDigit(zip);
    string checkdigit = codeForDigit(digit);

            sum += (zip % 10); // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            bar1 = codeForDigit(sum);
            sum = 0;
            sum += (zip % 10); // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            bar2 = codeForDigit(sum);
            sum = 0;
            sum += (zip % 10); // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            bar3 = codeForDigit(sum);
            sum = 0;
            sum += (zip % 10); // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            bar4 = codeForDigit(sum);
            sum = 0;
            sum += (zip % 10); // 1
            zip -= sum; // 90620
            zip /= 10; // 9062
            bar5 = codeForDigit(sum);
            sum = 0;







    result = "|"+bar5+bar4+bar3+bar2+bar1+checkdigit+"|";
    return result;

}








/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}
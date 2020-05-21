/**
 *  @author Brian Porter
 *  @date 09/14/2019
 *  @file h07.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "bporter11";  // Add your Canvas login name

int sumNums(const string& str)
{
    int num = 0;
    int sum = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        char digit = str.at(i);
        if (isdigit(digit))
        {
            digit -= '0';
            num *= 10;
            num += digit;

        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}


/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}



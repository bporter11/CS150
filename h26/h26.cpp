/**
 *  @author brian porter
 *  @date 11/7/2019
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h26.h"

// Add your code here
void reverse(char * s)
{
    char * a = s;
    char * b = s;

    while (*b)
    {
        b++;
        if (*b == '\0')
        {
            b--;
            break;
        }
    }

    while (a < b)
    {
        auto temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}

const char * findStr(const char *str1, const char *str2)
{
    if (*str2 == '\0') { return str1; }
    size_t len = -1;
    auto temp = *str1;
    while (temp != '\0') { len++; temp++; }

    for (size_t i = 0; i < len; i++)
    {
        auto p = str1 + i;
        auto p1 = str1 + i;
        auto p2 = str2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0') { return p; }
        else if (*p1 == '\0') { return nullptr; }
    }
    return nullptr;
}


//////////////////////// STUDENT TESTING //////////////////////////
int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}
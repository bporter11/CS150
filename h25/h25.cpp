/**
 *  @author brian porter
 *  @date 11/5/2019
 *  @file h15.cpp
 */
#include <string>
#include <stdexcept>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
bool sameSet(const int *aBeg, const int *aEnd,
             const int *bBeg, const int *bEnd)
{
    // cout << endl; //DEBUG

    bool aMatches = false;
    bool bMatches = false;

    const size_t A_LEN = aEnd - aBeg;
    const size_t B_LEN = bEnd - bBeg;


    // cout << "-----TESTING A SET-----" << endl; //DEBUG

    //iterate through A
    for (size_t i = 0; i < A_LEN; i++)
    {
        //check against B set
        for (size_t j = 0; j < B_LEN; j++)
        {
            //DEBUG
            // cout<< "Checking: a[" << i << "]: "
            //     << aBeg[i] << " ...versus... "
            //     << "b[" << j << "]: "
            //     << bBeg[j] << " | ";

            //find a match
            if (aBeg[i] == bBeg[j])
            {
                //DEBUG
                // cout << "MATCH FOUND: " << aBeg[i] << "..." << bBeg[j] << endl;

                aMatches = true;
                break; //save some work
            }
            //Otherwise no match, false

            aMatches = false;
            //debug
            // cout << "[NO MATCH]";
            // cout << "[aMatches: " << aMatches << "]" << endl;
        }
        if (!aMatches) { break; }
    }

    //DEBUG
    // cout << endl;
    // cout << "-----TESTING B SET-----" << endl;


    //iterate through B
    for (size_t i = 0; i < B_LEN; i++)
    {
        //check against A set
        for (size_t j = 0; j < A_LEN; j++)
        {
            //DEBUG
            // cout << "Checking: b[" << i << "]: "
            //     << bBeg[i] << " ...versus... "
            //     << "a[" << j << "]: "
            //     << aBeg[j] << " | ";

            if (bBeg[i] == aBeg[j])
            {
                //DEBUG
                // cout << "MATCH FOUND: " << bBeg[i] << "..." << aBeg[j] << endl;

                bMatches = true;
                break; //save some work
            }
            //Otherwise no match, false
            bMatches = false;
            //DEBUG
            // cout << "[NO MATCH]";
            // cout << "[bMatches: " << bMatches << "]" << endl;
        }
        if (!bMatches) { break; }
    }

    return aMatches && bMatches;
}
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    if (bSize < aSize)
    {
        throw length_error(" ... (up to u) ");
    }
    else
    {
        auto pb = b;
        for (auto p = a, end = a + aSize; p != end; p++)
        {
            if (*p % 2 == 0) *pb++ = *p;
        }
        bSize = pb - b;
    }
}




/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
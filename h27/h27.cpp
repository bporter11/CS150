/**
 *  @author brian porter
 *  @date 11/014/2019
 *  @file h27.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h27.h"

// Add your code here
FlexArray& readData(istream& in, FlexArray& a)
{
    size_t cap = INITIAL_CAPACITY;
    a.data_ = unique_ptr<int[]>(new int[cap]);
    int j , pos = 0;
    while(in >> j)
    {
        if(a.size_ == cap)
        {
            cap *= 2;
            unique_ptr<int[]> b;
            b.reset(a.data_.release());
            a.data_ = unique_ptr<int[]>(new int[cap]);
            for(size_t i = 0 ; i < a.size_ ; i++)
                a.data_[i] = b[i];
        }
        a.size_++;
        a.data_[pos] = j;
        pos++;
    }
            unique_ptr<int[]> b;
            b.reset(a.data_.release());
            a.data_ = unique_ptr<int[]>(new int[a.size_]);
            for(size_t i = 0 ; i < a.size_ ; i++)
                a.data_[i] = b[i];
    return a;
}
string toString(const FlexArray& a)
{
    string result;
    if(a.size_ > 0)
    {
    result += to_string(a.data_[0]);
    for(size_t i = 1 ; i < a.size_ ; i++)
    {
        result += ", " + to_string(a.data_[i]);
    }
    }
    return "{" + result + "}";
}


//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}
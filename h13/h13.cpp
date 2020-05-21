/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h13.h"

// Define your function here

std::string dataSets(const std::string& fileName)
{
    ostringstream result;
    ifstream in(fileName);
    if (in.fail()) result << "data/notfound.txt cannot be opened.";

    int data_set =1;
    int n;
    while (in >> n)
    {
        int count = 0;
        double sum = 0.0;

        while (n != 0)
        {
            count += n;
            double value;
            in >> value;
            sum += n*value;
            in >> n;

        }
        if (data_set > 1) result << "\n";
        result << fixed << setprecision(4);
        result << "data set " << data_set << ": total values = " << count << "\naverage value = "
        << sum / static_cast<double>(count) << endl;
        data_set++;
    }
    return result.str();
}

///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}

























/*
std::string dataSets(const std::string& fileName)
{
    ostringstream result;
    ifstream in(fileName);
    if (in.fail()) result << "data/notfound.txt cannot be opened.";

    int data_set =1;
    int n;
    while (in >> n)
    {
        int count = 0;
        double sum = 0.0;

        while (n != 0)
        {
            count += n;
            double value;
            in >> value;
            sum += n*value;
            in >> n;

        }
        if (data_set > 1) result << "\n";
        result << fixed << setprecision(4);
        result << "data set " << data_set << ": total values = " << count << "\naverage value = "
        << sum / static_cast<double>(count) << endl;
        data_set++;
    }
    return result.str();
}
*/
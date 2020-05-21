/**
    @file h35.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h35.h"

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const std::string& name , double r)
 {
     name_ = name;
     rate_ = r;
 }
std::string Worker::getName() const {return name_;}
double Worker::getRate() const {return rate_;}


SalariedWorker::SalariedWorker(const std::string& name , double r) : Worker(name , r) {}
std::string SalariedWorker::payInfo(int hour)
{
    ostringstream out;
    out << name_ << "(Salaried, $ " << fixed << setprecision(2) << rate_ << ") worked " <<  hour << " hours. Pay: $ " << fixed << setprecision(2) << 40 * rate_;
    return out.str();
}


HourlyWorker::HourlyWorker(const std::string& name , double r) : Worker(name , r){}

std::string HourlyWorker::payInfo(int hour)
{
    double pay;
    if(hour > 40) pay = (40 * rate_) + ((hour - 40) * rate_ * 1.5);
    else pay = hour * rate_;
    ostringstream out;
    out << name_ << "(Hourly, $ " << fixed << setprecision(2) << rate_ << ") worked " <<  hour << " hours. Pay: $ " << fixed << setprecision(2) << pay ;
    return out.str();
}


/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}

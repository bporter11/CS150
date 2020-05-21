/**
 *  @author brian porter
 *  @date 11/14/2019
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement the Bug class member functions here
Bug::Bug(int startPos)
   {
       position_ = startPos;
       direction_ = 1;
   }
   void Bug::move()
    {
        position_ += direction_ ;
    }
    void Bug::turn()
    {
        direction_ *= -1;
    }
    int Bug::position() const
    {
        return position_;
    }

// Implement the Employee class member functions here
Person::Person()
{
    age_ = 0;
}
Person::Person(const string& name, int age)
{
    name_ = name;
    age_ = age;
}
string Person::name() const
{
    return name_;
}
int Person::age() const
{
    return age_;
}

Employee::Employee()
{
    salary_ = 0;
}
Employee::Employee(const string& name, double salary)
{
    Person p = {name , data_.age()};
    data_ = p;
    salary_ = salary;
}
void Employee::salary(double newSalary)
{
    salary_ = newSalary;
}
double Employee::salary() const
{
    return salary_;
}
string Employee::name() const
{
    return data_.name();
}

// Implement the Employee class member functions here



//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    // Bug fred(3);
    // fred.move();
    // cout << "fred is now at " << fred.position() << endl;

    return 0;
}
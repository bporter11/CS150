/**
 *  @author Brian Porter
 *  @date 08/30/2019 TTEVE
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "bporter11";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
  cout << STUDENT << "-" << ASSIGNMENT << ": ";
  cout << "Cereal Box Calculator" << endl;
  cout << string(50, '-') << endl;


  cout << "Enter ounces per box of cereal: " ;
  double ouncesPerBox;
  cin >> ouncesPerBox;

  double weightInTons = ouncesPerBox / 35273.92;
  double boxesPerTon = 1.0 / weightInTons;

  cout <<"Weight in metric tons, boxes per ton: ["
    << weightInTons << ", "<<  boxesPerTon << "]" << endl;


    return 0;
}


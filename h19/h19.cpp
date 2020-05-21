/**
 *  @author bporter11
 *  @date 10/22/2019
 *  @file h11.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID


#include "h19.h"

// Place your function here
vector<WORD> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
vector<WORD> result;
string word;
long long pos;
while(in)
{
   pos = static_cast<long long>(in.tellg());
   if(pos == -1) break;
    in >> word >> ws;
    string temp;
    for(char c : word)
    {
        if(!ispunct(c)) temp += tolower(c);
    }
    word = temp;
    bool found = false;
    for(WORD& e : result)
    {
        if (word == e.word)
        {
        found = true;
         e.positions.push_back(pos);
         continue;
        }
    }
  if(!found)
  {
      for(string ex : excluded)
      {
          if(word == ex)
          {
          found = true;
          continue;
          }
      }
  }
  if(!found)
 {
     for(string d : dictionary)
      {
          if (word == d)
          {
          found = true;
          continue;
          }
      }
 }
   if(!found)
  {
      WORD a;
      a.word = word;
      a.positions.push_back(pos);
      result.push_back(a);
  }
}
return result;
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
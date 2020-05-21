#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author
    @version
*/
#include <string>

bool read(const string& agePrompt, int& age, bool check = true);

bool read(const string& gpaPrompt, double& gpa, bool check = true);

bool read(const string& namePrompt, string& name, bool check = true);

bool read(char& ch, char dot);

/*
bool read(const string& agePrompt, int& age, bool check)
    {
        string junk;
        cout << agePrompt;
        cin >> age;
        if (cin.fail())
        {
            cin >> junk;
            cin.clear();
            check = false;
        }
        else
        {
            check = true;
        }
        return check;
    }
    bool read(const string& gpaPrompt, double& gpa, bool check)
    {
        string junk;
        cout << gpaPrompt;
        cin >> gpa;
        if (cin.fail())
        {
            cin >> junk;
            cin.clear();
            check = false;
        }
        else
        {
            cin.ignore(1024, '\n');
            check = true;
        }
        return check;
    }
    bool read(const string& namePrompt, string& name, bool check)
    {
        string junk;
        cout << namePrompt;
        getline(cin, name);
        return check;
    }
    bool read(char& ch, char dot)
    {
        cin.get(ch);
        if (ch == dot)
         return false;
        else
            return true;
    }
*/


#endif

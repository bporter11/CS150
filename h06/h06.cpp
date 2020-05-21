/**
 *  @author bporter11
 *  @date 09/14/2019 TTEVE
 *  @file h06.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "bporter11";  // Add your Canvas login name

string toFrenchGender(const string& country)
{
    string result;
    string masculine = "le ";
    string fem = "la ";
    string vowel = "l'";
    string plural = "les ";
    string end = country.substr(country.size()-2); // last two char
    string begin = country.substr(0,4); // first four char


    //Belize Cambodge Mexique Mozambique Zaire Zimbabwe (all le)
    if (country == "Belize" || country == "Cambodge" || country == "Honduras" || country == "Mexique"
    || country == "Mozambique" || country == "Costa Rica" || country == "Zimbabwe")
    {
        result = masculine += country;
    }

    //Israel, Madagascar, Sri Lanka, singapore, monaco, cuba and cyprus have no prefix
    else if (country == "Israel" || country == "Madagascar" || country == "Sri Lanka" || country == "Singapore" ||
    country == "Monaco" || country == "Cuba" || country == "Cyprus")
    {
        return country;
    }

    //Plural? prefix is les
    else if (end == "es" || end == "is" || end == "as" || end == "os" || begin == "iles")
    {
        result = plural += country;
    }

    //starts with a vowel? prefix L'
    else if (country.front() == 'A' || country.front() == 'E' || country.front() == 'I' || country.front() == 'O'
    || country.front() == 'U')
    {
        result = vowel += country;
    }

    //country end in letter e or o? feminine prefix -> la (space) otherwise? masculine prefix -> Le
    else if (country.back() == 'e' || country.back() == 'o')
    {
        result = fem += country;
        return result;
    }
    else
    {
        result = masculine += country;
        return result;
    }

    return result;
}
int run()
{
    cout << "student testing" << endl;
    return 0;
}

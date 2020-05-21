/**
 *  @file h30.cpp
 *  @author brian porter
 *  @version 11/21/2019 TTEVE
 */
#include <string>
#include <stdexcept>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h30.h"

// Implement your class and operators here
static int gcd(int x , int y)
{
    int r = x % y;
    while(r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}
Fraction::Fraction(int n)
{
     numerator_ = n;
}
Fraction::Fraction(int n, int d)
{
    if(d == 0) throw invalid_argument("Error");
    if(n == 0)  numerator_ = 0;
    else
    {
        int g = gcd(abs(n) , abs(d));
        numerator_ = n / g;
        denominator_ = abs(d) / g;
        if(d < 0) numerator_ *= -1;
    }
}

Fraction& Fraction::operator+=(const Fraction& rhs)
{
 int a = numerator_;
 int b = denominator_;
 int c = rhs.numerator_;
 int d = rhs.denominator_;
 *this = Fraction(a * d + c * b , b * d);
 return *this;
}
Fraction& Fraction::operator-=(const Fraction& rhs)
{
 int a = numerator_;
 int b = denominator_;
 int c = rhs.numerator_;
 int d = rhs.denominator_;
 *this = Fraction(a * d - c * b , b * d);
 return *this;
}
Fraction& Fraction::operator*=(const Fraction& rhs)
{
 int a = numerator_;
 int b = denominator_;
 int c = rhs.numerator_;
 int d = rhs.denominator_;
 *this = Fraction(a * c , b * d);
 return *this;
}
Fraction& Fraction::operator/=(const Fraction& rhs)
{
 int a = numerator_;
 int b = denominator_;
 int c = rhs.numerator_;
 int d = rhs.denominator_;
 *this = Fraction(a * d , b * c);
 return *this;
}

string Fraction::toString() const
{
    string r;
    if(denominator_ != 1)  r = to_string(numerator_) + "/" + to_string(denominator_);
    else  r = to_string(numerator_);
    return r;

}
ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << f.toString();
    return out;
}

const Fraction operator+(const Fraction& lhs, const Fraction& rhs)
{
    Fraction result(lhs);
    return result += rhs;
}
const Fraction operator-(const Fraction& lhs, const Fraction& rhs)
{
    Fraction result(lhs);
    return result -= rhs;
}
const Fraction operator*(const Fraction& lhs, const Fraction& rhs)
{
     Fraction result(lhs);
     return result *= rhs;
}
const Fraction operator/(const Fraction& lhs, const Fraction& rhs)
{
     Fraction result(lhs);
     return result /= rhs;
}




/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Uncomment these and use make run to test." << endl;
    // Fraction a(3, 6); // 1/2 after reducing
    // Fraction b(1, 3); // 1/3
    // Fraction c(1, 6); // 1/6

    // Fraction sum = a + b + c;

    // cout << a << " + " << b << " + " << c
    //     << " = " << sum << endl;

    return 0;
}


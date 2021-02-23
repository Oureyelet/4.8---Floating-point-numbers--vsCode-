#include <iostream>
#include <iomanip> // for std::setprecision()
#include "first.h"

using namespace std;

int main()
{
    first_message();

    int x{5}; // 5 means integer
    double y{5.0}; //5.0 is a floating point literal 
                  //(no suffix means double type by default)
    float z{5.0f}; // 5.0 is a floating point literal
                  //(f suffix means float type)
    float o{1};
    float p{3};
    cout << o/p << '\n' << endl; //it assumes all floating point 
                                //variables are only significant to 6 digits 

    printing_floating_point_numbers();

    cout << 9.87654321f << '\n';
    cout << 987.654321f << '\n';
    cout << 987654.321f << '\n';
    cout << 9876543.21f << '\n';
    cout << 0.0000987654321f << '\n' << endl;

    /*
    We can override the default precision that 
    std::cout shows by using the std::setprecision() 
    function that is defined in the iomanip header.
    */

    cout << setprecision(16) << '\n';
    cout << 3.33333333333333333333333333333333333333f << '\n'; //f suffix means float
    cout << 3.33333333333333333333333333333333333333 << '\n' << endl; //no suffix means double

    // Let’s consider a big number:

    float f{ 123456789.0f }; // f has 10 significant digits
    cout << setprecision(9) << '\n'; // to show 9 digits in f
    cout << f << '\n' << endl;

    //Rounding errors make floating point comparisons tricky:

    cout << setprecision(17);
    double d1{ 1.0 };
    cout << d1 << '\n';
    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
    cout << d2 << '\n' << endl;

    //NaN="Not a Number" and Inf="infinity"

    double zero { 0.0 };
    double posinf { 5.0 / zero }; //positive infinity
    cout << posinf << '\n';

    double neginf { -5.0 / zero }; //negative infinity
    cout << neginf << '\n';

    double nan { zero / zero}; // NaN (mathematically invalid)
    cout << nan << '\n' << endl;



    return 0;
}
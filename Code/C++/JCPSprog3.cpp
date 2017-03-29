/*  The test file for the Rational class's functions for assignment 11
*  Edward G. Kovach
*  December 6, 2014
*  Test the required functions of the Rational class
*  Does not contain the required pseudocode
*/


#include <iostream>
using namespace std;

#include "JCPSRational.h" // include definition of class EGKRational from EGKRational.h

int main()
{
	JCPSRational fraction1(6, 9), fraction2(4, 8), fraction3;
	int i;
	cout << "The first fraction :";
	fraction1.printFract();
	cout << "  ";
	fraction1.printDecimal();
	cout << endl;

	cout << "The second fraction :";   // tests to see if the constructor will reduce the fraction
	fraction2.printFract();
	cout << "  ";
	fraction2.printDecimal();
	cout << endl;

	cout << "The third fraction :";    // tests to see if the default
	fraction3.printFract();
	cout << "  ";
	fraction3.printDecimal();
	cout << endl;
	//Obligatory testing of overloaded operators
	fraction3 = (fraction1 + fraction2);
	fraction3.printFract();
	cout << "\n";
	//Minus
	fraction3 = (fraction3 - fraction2);
	fraction3.printFract();
	//Multiplication
	//temp = ;
	fraction3 = (fraction3*fraction2);
	cout << "\n";
	fraction3.printFract();
	//Divide
	//temp = ;
	fraction3 = (fraction1 / fraction2);
	cout << "\n";
	fraction3.printFract();
	//Assignment
	fraction3 = fraction1;
	cout << "\n";
	fraction3.printFract();

	fraction2 += fraction1;
	cout << "\n";
	fraction2.printFract();

	cout << "\n" << (fraction2 > fraction1);
	cout << "\n" << (fraction2 <= fraction1);
	cout << "\n" << (fraction2 == fraction1);
	cout << "\n" << (fraction2 != fraction1);
	cout << "\n";

	fraction3 = fraction3;
	fraction3.printFract();

	cout << fraction1;
	cout << "\n" << "Enter new fraction" << "\n";
	cin >> fraction3;

	fraction3.printFract();

	cin >> i;
	return 0; // indicates program ended successfully
} // end main

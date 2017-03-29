/*  The implementation file for the Rational class's functions for assignment 11
*  Edward G. Kovach
*  December 6, 2014
*  implements the class JCPSRational's member functions.
*  Does not contain the required pseudocode
*/


using namespace std;
#include <iostream>
#include <string>
#include "JCPSRational.h" // include definition of class JCPSRational from JCPSRational.h

// JCPSRational constructor reduces fractions
JCPSRational::JCPSRational(int newNum, int newDen)
	:numerator(newNum), denominator(newDen)
{

	reduce();   //reduces the fraction to the lowest common terms

}

JCPSRational::JCPSRational(JCPSRational& newRat) //Copy constructor
{
	numerator = newRat.numerator;
	denominator = newRat.denominator;
}

// Function to add fractions
JCPSRational & JCPSRational::add(JCPSRational & fract)
{
	int newDen = denominator * fract.denominator;
	int newNum = numerator * fract.denominator + denominator * fract.numerator; // add fractions

	JCPSRational sum(newNum, newDen);  //creates a new Rational object which represents the sum
	return sum; // return new fraction
}

// Function to subtract fractions
JCPSRational & JCPSRational::subtract(JCPSRational & fract)
{
	int newDen = denominator * fract.denominator;
	int newNum = numerator* fract.denominator - denominator * fract.numerator; // subtraction fractions

	JCPSRational difference(newNum, newDen);  //creates a new Rational object which represents the difference
	return difference; // return new fraction
}

// Function to multiply fractions
JCPSRational & JCPSRational::multiply(JCPSRational & fract)
{
	int newDen = denominator * fract.denominator;
	int newNum = numerator * fract.numerator; // multiply fractions

	JCPSRational product(newNum, newDen);   //creates a new Rational object which represents the product
	return product; // return new fraction
}

// Function to divide fractions
JCPSRational & JCPSRational::divide(JCPSRational  & fract)
{
	int newDen = denominator * fract.numerator;
	int newNum = numerator * fract.denominator; // divide fractions

	JCPSRational quotient(newNum, newDen); //creates a new Rational object which represents the quotient
	return quotient; // return new fraction
}

// Function to print fractions
void JCPSRational::printFract()
{
	cout << numerator << "/" << denominator; // print fraction
}

// Function to print fractions
void JCPSRational::printDecimal()
{
	cout << 1.0 * numerator / denominator; // print fraction
}

JCPSRational& JCPSRational::operator+(JCPSRational& rat)
{
	JCPSRational result((numerator*rat.denominator+denominator*rat.numerator), denominator * rat.denominator); //Implements same tricks in addition method
	return result;
}

JCPSRational& JCPSRational::operator*(JCPSRational& rat)
{
	JCPSRational result(numerator*rat.numerator, denominator*rat.denominator);
	return result;
}

JCPSRational& JCPSRational::operator-(JCPSRational& rat)
{
	JCPSRational result((numerator*rat.denominator-denominator*rat.numerator) , denominator*rat.denominator); //Implements same tricks in subtraction method
	return result;
}

JCPSRational& JCPSRational::operator/(JCPSRational& rat)
{
	JCPSRational result(numerator*rat.denominator, denominator*rat.numerator);
	return result;
}

void JCPSRational::operator=(JCPSRational& rat)
{
	//JCPSRational result(rat.numerator, rat.denominator);
	if (this == &rat)      // Same object?
		return;
	numerator = rat.numerator;
	denominator = rat.denominator;
	//return *this;
}

JCPSRational & JCPSRational::operator+=(JCPSRational& rat) //Same tricks as addition method
{
	numerator = numerator*rat.denominator + denominator*rat.numerator;
	denominator = denominator * rat.denominator;
	reduce();
	return *this;
}

bool JCPSRational::operator==(JCPSRational & rat)
{
	double thisRational = numerator / denominator;
	double thatRational = rat.numerator / rat.denominator;
	if (thisRational == thatRational) {
		return true;
	}
	return false;
}

bool JCPSRational::operator!=(JCPSRational & rat)
{
	double thisRational = numerator / denominator;
	double thatRational = rat.numerator / rat.denominator;
	if (thisRational != thatRational) {
		return true;
	}
	return false;
}

bool JCPSRational::operator>(JCPSRational & rat)
{
	double thisRational = numerator / denominator;
	double thatRational = rat.numerator / rat.denominator;
	if (thisRational > thatRational) {
		return true;
	}
	return false;
}

bool JCPSRational::operator<=(JCPSRational & rat)
{
	double thisRational = numerator / denominator;
	double thatRational = rat.numerator / rat.denominator;
	if (thisRational <= thatRational) {
		return true;
	}
	return false;
}


ostream& operator<< (ostream &out, JCPSRational const& rat)
{
	return out << "\n" << rat.numerator << "/" << rat.denominator;
}

istream & operator>>(istream &in, JCPSRational & rat)
{
	in >> rat.numerator >> rat.denominator;
	return in;
}

// Function to reduce fractions
void JCPSRational::reduce()
{
	int gcden;

	if (numerator == denominator)
	{
		gcden = numerator;
	}
	else if (numerator>denominator)
	{
		gcden = gcd(numerator, denominator);
	}
	else
	{
		gcden = gcd(denominator, numerator);
	}
	numerator /= gcden;
	denominator /= gcden;
}

// Function to find greatest common denominator
int JCPSRational::gcd(int x, int y)    // algorithm from p 273 of our text.
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x%y);
	}
}


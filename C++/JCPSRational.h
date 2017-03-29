/*  The header file for assignment 11
*  Edward G. Kovach
*  December 6, 2014
*  defines the class JCPSRational which models fractions.
*/

#ifndef JCPSRATIONAL
#define JCPSRATIONAL

using namespace std;
#include <iostream>
#include <string>

class JCPSRational
{
public:
	// The instructions for assignment 11, did not require the return type to be Rational &.  I made them Rational & because
	// it makes the program run more efficiently.  It would work with return types of just Rational/

	JCPSRational(int = 0, int = 1);
	JCPSRational(JCPSRational&);// constructor
	JCPSRational& add(JCPSRational &);      // add two fractions
	JCPSRational& subtract(JCPSRational &); // subtract two fractions
	JCPSRational& multiply(JCPSRational &); // multiply two fractions
	JCPSRational& divide(JCPSRational &);   // divide two fractions
	void printFract();        // prints the fraction
	void printDecimal();	// prints the decimal value of the fraction
	JCPSRational& operator+(JCPSRational&);
	JCPSRational& operator*(JCPSRational&);
	JCPSRational& operator-(JCPSRational&);
	JCPSRational& operator/(JCPSRational&);
	JCPSRational &operator+=(JCPSRational&);
	void operator=(JCPSRational&);
	bool operator==(JCPSRational&);
	bool operator!=(JCPSRational&);
	bool operator>(JCPSRational&);
	bool operator<=(JCPSRational&);
	friend ostream& operator<< (ostream &, JCPSRational const&);
	friend istream& operator>> (istream &, JCPSRational &);



private:
	int numerator;            // numerator of fraction
	int denominator;          // denominator of fraction
	void reduce();            // reduces fractions
	int gcd(int, int);        // finds the greatest common denominator
};

#endif

/*
---------------------------------------------
|                   JCPSRational             |
|-------------------------------------------|
|                 -numerator : int          |
|                 -denominator : int        |
|-------------------------------------------|
|+<constructor>JCPSRational(n:int=0, d:int=1)|
|+add(n:JCPSRational&):JCPSRational&          |
|+subtract(n:JCPSRational&):JCPSRational&     |
|+multiply(n:JCPSRational&):JCPSRational&     |
|+divide(n:JCPSRational&):JCPSRational&       |
|+printFract()                              |
|+printDecimal()                            |
|-reduce()                                  |
|-gcd():int                                     |
---------------------------------------------
*/

/* Pseudocode for JCPSRational.h
class for Rationals {
	public:
	constructor with int num and int denom {
	call reduce();
	}
	copy constructor with JCPSRational &

	Add, subtract, multiply, divide methods
	Print methods

	Arithmetic operator overloads
	+= Operator overload
	Assignment operator overload
	Comparison operators overload (> <=)
	Stream operators overload

	private:
	int numerator, denominator
	GCD method
	reduce method called on initialization



}





*/

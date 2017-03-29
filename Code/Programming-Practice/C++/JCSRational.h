#ifndef JCSRATIONAL_H
#define JCSRATIONAL_H

//#include <iostream>
//#include <string.h>
using namespace std;

class Rational {

public:
	//constructor
	Rational(int num = 2, int denom = 4);

	//Number manipulation methods
	Rational & add(Rational &c);
	Rational & subtract(Rational &c);
	Rational & multiply(Rational &c);
	Rational & divide(Rational &c);

	//Object get methods
	int getNum();
	int getDenom();

	//Print methods
	void printFrac();
	void printDec();

private:
	//Data members
	int Numerator;
	int Denominator;

	//Private reduce function. Called internally by the constructor
	void reduce();




};

#endif

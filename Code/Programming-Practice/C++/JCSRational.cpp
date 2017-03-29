#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Rational {

public:
	//The constructor
	Rational(int num = 2, int denom = 4) {
		Numerator = num;
		Denominator = denom;
		reduce();
	}

	Rational & add(Rational &c) { //Simple addition using a trick. Returns a reference to the object storing the result
		int tempNum = Numerator * c.getDenom() + Denominator*c.getNum();
		int tempDenom = Denominator * c.getDenom();
		Rational temp(tempNum, tempDenom);
		return temp;
	}

	Rational & subtract(Rational &c) {
		//Iteration variables are used to determine the multiplication factor for the numerators
		int iteration = 1;
		int iteration2 = 1;
		//tempNum and tempDenom hold the numerator and denominator of the object referenced by c
		int tempNum = c.getNum();
		int tempDenom = c.getDenom();
		//This variable holds this objects denominator. The objects denominator is not itself changed, as intended
		int denom = Denominator;
		//This variable holds the original denominator value of the passed rational object.
		//It is used for converting the fractions into like fractions (same denominator).
		int originalDenom = tempDenom;
		while (denom != tempDenom) { //Will perform the this segment of code repeatedly until the denominators are the same
			if (tempDenom < denom) { //If new denominator is less than this object's denominator, increase it
				tempDenom += originalDenom;
				iteration2++; //iteration2 is used for the passed object
			}
			if (tempDenom > denom) { //If new denominator is greater than this object's denominator, increase this object's denominator
				denom += Denominator;
				iteration++; //iteration is used for this object
			}
		}
		//The new numerators, and the result of their subtraction
		int newNum = Numerator*iteration;
		tempNum = tempNum*iteration2;
		tempNum = newNum - tempNum;
		//Temp object created, with the reference to the object returned.
		Rational temp(tempNum, tempDenom);
		return temp;
	}

	Rational & multiply(Rational &c) { //Simple multiplication is performed, with a reference to the object containing the result returned
		int tempNum = Numerator * c.getNum();
		int tempDenom = Denominator*c.getDenom();
		Rational temp(tempNum, tempDenom);
		return temp;
	}

	Rational & divide(Rational &c) { //Simple Division is performed, with a reference to the object containing the result returned
		int tempNum = Numerator * c.getDenom();
		int tempDenom = Denominator * c.getNum();
		Rational temp(tempNum, tempDenom);
		return temp;
	}
	//The get methods
	int getNum() {
		return Numerator;
	}

	int getDenom() {
		return Denominator;
	}
	//The print methods
	void printFrac() {
		//cout << " \n ";
		cout << "\n";
		cout << Numerator << "\n" << "--" << "\n" << Denominator << " \n "; //Number is printed in fractional format
	}

	void printDec() { //Number is printed in decimal form
		float numf = Numerator;
		float numd = Denominator;
		float decimal = numf / numd;
		//cout << decimal;
		printf("Result: %f", decimal);
		//cout << "\n";
	}

private:
	//The Data members
	int Numerator;
	int Denominator;

	void reduce() {
		// code obtained from http://www.cplusplus.com/forum/general/74688/
		for (int i = Numerator*Denominator; i > 0; i--) {
			if ((Numerator % i == 0) && Denominator % i == 0) {
				Numerator /= i;
				Denominator /= i;
			}
		}
	}

};
/*Pseudo code

Initialize class Rational {

	Private data members:
		Integer Numerator
		Subtract method(Rational Pointer) {
			Write code which will make the denominators equal.
			Next multiply numerators by the factor of multiplication used to increase the denominator
			Subtract the numerators
			Return the result

		}
		Divide method(Rational Pointer) {
		Integer Denominator
		Reducing function { }
	Public members:
		Constructor with default parameters, num = 2 and denom = 4 {
			This constructor assigns num to Numerator and denom to Denominator, then calls the reduce function
		}
		Add method(Rational pointer) {
			The new numerator is the result of Numerator*c.denominator + Denominator*c.Numerator
		}

			Multiply Numerator with Pointer's denominator. This is the new numerator
			Multiply Denominator with Pointer's numerator. This is the new Denominator
			Return the result
		}

		Multiply method(Rational Pointer) {
			Multiply Numerator with Pointer's numerator. This is the new numerator
			Multiply Denominator with Pointer's denominator. This is the new denominator
			Return result
		}
		Get methods for Numerator and Denominator {
			Return either Numerator or Denominator
		}
		Print methods {
			Return number as a fraction or decimal
		}

}
*/

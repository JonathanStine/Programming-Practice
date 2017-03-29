
#include "JCSRational.cpp"


int main()
{
	int i;
	Rational fract1(8, 15), fract2(2, 5), fract3(7, 11);
	fract3 = fract1.add(fract2); // fract3 = fract1 + fract2
	fract3.printFrac();
	fract3.printDec();
	fract2 = fract3.subtract(fract1);                   // fract2 = fract3 – fract1
	fract2.printFrac();
	fract2.printDec();
	fract1 = fract2.multiply(fract3);            // fract1 = fract2 * fract3
	fract1.printFrac();
	fract1.printDec();
	fract1 = fract3.divide(fract2);               // fract1 = fract3 / fract2
	fract1.printFrac();
	fract1.printDec();
	cin >> i; //For diagnostic purposes
    return 0;
}


//#include "Package.h"
#include <string>
#include "JCSTwoDayPackage.h"
#include <iostream>
//#include "Package.h"
using namespace std;

	JCSTwoDayPackage::JCSTwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo, double f)
		: JCSPackage(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, cpo) {
		fee = f;

	}
	//using TwoDayPackage::calculateCost;
	double JCSTwoDayPackage::calculateCost() {
		return (weight*costPerOunce)+fee;
	}

	void JCSTwoDayPackage::printObject()
	{
		cout << "Sender name: " << sname << "\n";
		cout << "Sender address: " << saddress << "\n";
		cout << "Sender city: " << scity << "\n";
		cout << "Sender state: " << sstate << "\n";
		cout << "Sender zipcode: " << sZIP << "\n";
		cout << "Receiver name: " << rname << "\n";
		cout << "Receiver address: " << raddress << "\n";
		cout << "Receiver city: " << rcity << "\n";
		cout << "Receiver state: " << rstate << "\n";
		cout << "Receiver zipcode: " << rZIP << "\n";
		cout << "Package wait :" << weight << "\n";
		cout << "Package Cost per Ounce: " << costPerOunce << "\n";
		cout << "Fee: " << fee << "\n";
		cout << "Cost: " << JCSTwoDayPackage::calculateCost();

	}







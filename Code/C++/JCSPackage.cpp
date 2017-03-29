#include <string>
#include "JCSPackage.h"
#include <iostream>
using namespace std;


	JCSPackage::JCSPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo) {
		sname = sn;
		saddress = sa;
		scity = sc;
		sstate = ss;
		sZIP = sz;
		rname = rn;
		raddress = ra;
		rcity = rc;
		rstate = rs;
		rZIP = rz;
		weight = w;
		costPerOunce = cpo;
	}

	double JCSPackage::calculateCost()
	{
		return weight*costPerOunce;
	}

	void JCSPackage::printPackage()
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
		//cout << "Fee: " << fee << "\n";
		cout << "Cost: " << JCSPackage::calculateCost();
	}


	/*double Package::calculateCost() const{
		return weight*costPerOunce;
	} */



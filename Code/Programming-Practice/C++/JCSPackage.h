#ifndef JCSPACKAGE
#define JCSPACKAGE

#include <string>
using namespace std;

class JCSPackage {
public:
	JCSPackage(string sn = " ", string sa = " ", string sc = " ", string ss = " ", int sz =0, string rn = " ", string ra = " ", string rc = " ",
		string rs = " ", int rz = 0, int w= 0, int cpo=0);

	double calculateCost();
	/*double calculateCost(int) const;
	double calculateCost(double) const; */
	//double calculateCost(int);
	void printPackage();


protected:
	string sname;
	string saddress;
	string scity;
	string sstate;
	int sZIP;
	string rname;
	string raddress;
	string rcity;
	string rstate;
	int rZIP;
	int weight;
	int costPerOunce;

};

#endif




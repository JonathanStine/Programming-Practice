#ifndef JCSOVERNIGHTPACKAGE
#define JCSOVERNIGHTPACKAGE

#include "JCSPackage.h"
#include <string>
using namespace std;

class JCSOvernightPackage : public JCSPackage {
public:
	//TwoDayPackage::TwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo, double f) : Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, cpo) {};
	JCSOvernightPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo, double f);
	//using Package::calculateCost;
	double calculateCost();
	void printObject();


private:
	double fee;





};


#endif

#ifndef JCSTWODAYPACKAGE
#define JCSTWODAYPACKAGE

#include "JCSPackage.h"
using namespace std;

class JCSTwoDayPackage : public JCSPackage {
public:
	//TwoDayPackage::TwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo, double f) : Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, cpo) {};
	JCSTwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, int w, int cpo, double f);
	//using Package::calculateCost;
	double calculateCost();
	void printObject();


private:
	double fee;





};





#endif

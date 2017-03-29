#include <iostream>
#include "JCSTwoDayPackage.h"
#include "JCSOvernightPackage.h"
#include <string>
#include <iostream>
using namespace std;


int main(){
	int i;
	JCSTwoDayPackage pack1("Jonathan Stine", "12050", "Manassas", "VA", 20112, "Bethany Stine", "14039", "Dumfriye", "VA", 20114, 8, 3, 3.00);
	cout << "TwoDayPackage:" << "\n" << "\n";
	pack1.printObject();
	JCSOvernightPackage pack2("Jonathan Stine", "12050", "Manassas", "VA", 20112, "Bethany Stine", "14039", "Dumfriye", "VA", 20114, 8, 3, 3.00);
	cout << "\n" << "\n" << "Overnight Package:" << "\n" << "\n";
	pack2.printObject();
	JCSPackage pack3("Jonathan Stine", "12050", "Manassas", "VA", 20112, "Bethany Stine", "14039", "Dumfriye", "VA", 20114, 8, 3);
	cout << "\n" << "\n" << "Package:" << "\n" << "\n";
	pack3.printPackage();
	cin >> i;
	return 0;
}


#include "JCPSArrayBag.h"
#include <string>

using namespace std;

int main() {

	/* int newArray[25];
	newArray[0] = 4;
	newArray[1] = 4;
	newArray[2] = 7;
	newArray[3] = 9; */
	ArrayBag<int> bag ();

	bag.add(6);
	bag.add(3);
	bag.add(6);
	bag.add(4);
	bag.add(5);



	return 0;
}
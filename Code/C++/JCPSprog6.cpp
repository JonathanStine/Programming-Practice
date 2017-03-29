#include <vector>
#include "JCPSLinkedBag.cpp"
#include <iostream>

using namespace std;





int main() {

	LinkedBag<int> ADTbag;
	int i;
	ADTbag.add(5);
	ADTbag.add(9);
	ADTbag.add(4);

	LinkedBag<int> bag2;
	bag2.add(3);
	bag2.add(9);
	bag2.add(23);
	bag2.add(4);
	bag2.add(7);

	int size = ADTbag.getCurrentSize();
	cout << size;
	vector<int> temp = ADTbag.toVector();
	for (int i = 0; i < size; i++) {
		cout << "\n" << temp[i];
	}
	cout << "\n" << ADTbag.getFrequencyOf(4);
	cout << "\n" << "Bag2 size: " << bag2.getCurrentSize();
	cout << "\n" << "Intersection. Size should be 2" << "\n";
	LinkedBag<int> bag3(bag2.intersection(ADTbag));
	cout << "\n" << bag3.getCurrentSize();
	cout << "\n" << bag3.contains(4);
	cout << "\n";

	bool success = ADTbag.remove(4);
	cout << "\n" << "Did it succeed?";
	cout << "\n" << success;
	size = ADTbag.getCurrentSize();
	cout << "\n" << size;
	ADTbag.clear();
	size = ADTbag.getCurrentSize();
	cout << "\n" << size;
	cin >> i;

	

	return 0;
}


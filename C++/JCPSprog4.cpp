//Unfortunately, I was unable to figure out the code in time. Here is what I have. 
//I'll try to turn in a functional version a day or two later, but this is what I have for now.

#include <iostream>

using namespace std;
int anArray[20] = { 48,12,27,23,95,28, 80, 47, 2, 69,21, 49, 32, 64, 32, 34, 28, 81, 1, 0 };
int returnArray[20];
int rightPartition[20];
int leftPartition[20];
int pivot;
int pivotindex;
int i;

int rincrement;
int lincrement;

int kSmall(int k, int first, int last) {
	if (returnArray[1] != 0) {
		//if ((last - first) == 1 || (last == first)) {
		//int size = last - first;
		pivot = anArray[first];
		pivotindex = 0;
		i = 0;
		//int * partElements = partition(anArray, pivot);

		//Code for partitioning

		rincrement = 0;
		lincrement = 0;

		//clear arrays
		for (int i = 0; i <= 19; i++) {
			returnArray[i] = 0;
			rightPartition[i] = 0;
			leftPartition[i] = 0;
		}

		for (i = 0; i <= 19; i++) {
			if (anArray[i] < pivot) {
				leftPartition[lincrement] = anArray[i];
				lincrement++;
			}
			else if (anArray[i] > pivot) {
				rightPartition[rincrement] = anArray[i];
				rincrement++;
			}


		}
		for (i = 0; i <= lincrement; i++) {
			returnArray[i] = leftPartition[i];
		}
		returnArray[i] = pivot;
		/*rincrement = 0;
		returnArray[i] = pivot;
		for (i=i+1; i <= 19; i++) {
		returnArray[i] = rightPartition[rincrement];
		rincrement++;
		} */

		//End partition code
		i = 0;
		while (pivotindex == 0) {
			if (returnArray[i] == pivot) {
				pivotindex = i;
				break;
			}
			i++;
		}

		//anArray = returnArray;

		if (k < pivotindex - first + 1)
			return kSmall(k, first, pivotindex - 1);
		else if (k == pivotindex - first + 1)
			return pivot;
		else
			return kSmall(k - (pivotindex - first + 1), pivotindex + 1, last);
		//}
	}
	else {
		return pivot;
	}

	/*Pseudocode
	Ksmall (int k, int first, int last) {
	Check to make sure there is more than one element in the array.
	If there is, proceed:
	Write code to partition the array into a left partition and a right partition.
	The partition code will sort all the items lower than the pivot to leftPartition,
	and all the items higher than the pivot to the rightPartition. It'll then combine both
	arrays into the same array for further parsing.
	Then, implement the pseudocode for finding the smallest kth element of a partition.


	*/






}
	int main()
	{

		//int * partElements = partition(elements);

		int result = kSmall(3, 0, 19);
		cout << result;


		//cout << "Hello world!" << endl;
		return 0;
	}


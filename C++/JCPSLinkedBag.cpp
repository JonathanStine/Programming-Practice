#include "JCPSLinkedBag.h"
#include "JCPSnode.cpp"
#include <vector>

using namespace std;

template<class ItemType>
inline Node<ItemType>* LinkedBag<ItemType>::getPointerTo(const ItemType & target) const
{
	Node<ItemType> * temp = headPtr;
	for (int i = 0; i < itemCount; i++) {
		if (temp->getItem() == target) {
			return temp;
		}
		else {
			temp = temp->getNext();
		}

	}
	return NULL;
}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag()
{

}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType>& aBag)
{
	vector<ItemType> temp(aBag.getCurrentSize());
	temp = aBag.toVector();

	for (int i = 0; i < aBag.getCurrentSize(); i++) {
		add(temp[i]);
	}

}

template<class ItemType>
LinkedBag<ItemType>::~LinkedBag()
{

}

template<class ItemType>
int LinkedBag<ItemType>::getCurrentSize() const
{
	return itemCount;
}

template<class ItemType>
bool LinkedBag<ItemType>::isEmpty() const
{
	if (itemCount == 0) {
		return true;
	}
	return false;
}

template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType & newEntry)
{
	Node<ItemType> * temp = new Node<ItemType>();
	temp->setItem(newEntry);
	temp->setNext(headPtr);
	headPtr = temp;
	itemCount++;
	return true;
}

template<class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType & anEntry)
{
	//int i;
	Node<ItemType> * temp = headPtr;
	int position = 0;
	bool exists = false;
	while (position < itemCount) {
		if (temp->getItem() == anEntry) {
			exists = true;
			break;
		}
		else if (position == (itemCount - 1)) {
			exists = false;
			break;
		}
		else {
			temp = temp->getNext();
		}
		position++;

	}
	//cout << position;
	//cin >> i;
	if (exists == false) {
		return false;
	}
	Node<ItemType> * temp2;;

	Node<ItemType> * nextPtr;
	if (position == (itemCount - 1)) { //if the last element was asked to be removed, remove it and return true.
		delete temp;
		itemCount--;
		return true;
	}
	else { //If last element not removed, get next ptr so that the element immediately prior to the removed element can have its next property set to nextptr
		nextPtr = temp->getNext();
		delete temp;
	}

	temp2 = headPtr;
	for (int i = 0; i <= position; i++) {

		if (position == 0) {
			headPtr = nextPtr;
			itemCount--;
			return true;
		}
		else if (i == position) {
			temp2->setNext(nextPtr);
			itemCount--;
			return true;
		}
		else {
			temp2 = temp2->getNext();

		}

	}
	//delete temp;
	return false;
}

template<class ItemType>
void LinkedBag<ItemType>::clear()
{
	Node<ItemType> * temp = headPtr;
	Node<ItemType> * nextPtr;
	if (isEmpty() == false) {
		for (int i = 0; i < itemCount; i++) {
			if (i != itemCount - 1) {
				nextPtr = temp->getNext();
			}
			delete temp;
			if (i != itemCount - 1) {
				temp = nextPtr;
			}
		}
	}
	itemCount = 0;
}

template<class ItemType>
bool LinkedBag<ItemType>::contains(const ItemType & anEntry) const
{
	Node<ItemType> * temp = getPointerTo(anEntry);
	if (temp == NULL) {
		return false;
	}
	return true;
}

template<class ItemType>
int LinkedBag<ItemType>::getFrequencyOf(const ItemType & anEntry) const
{
	int frequency = 0;
	vector<ItemType> temp(itemCount);
	temp = toVector();
	for (int i = 0; i < itemCount; i++) {
		if (temp[i] == anEntry) {
			frequency++;
		}

	}
	return frequency;
}

template<class ItemType>
vector<ItemType> LinkedBag<ItemType>::toVector() const
{
	vector<ItemType> temp(itemCount);
	Node<ItemType> * tempPt = headPtr;
	int iterations = 0;
	while (iterations<itemCount) {
		temp[iterations] = tempPt->getItem();
		tempPt = tempPt->getNext();
		iterations++;
	}
	return temp;
}

//Accepts another LinkedBag as a paramater
//Returns a LinkedBag that contains the values in both the passed LinkedBag and the LinkedBag used to call the function
template<class ItemType>
LinkedBag<ItemType> LinkedBag<ItemType>::intersection(LinkedBag<ItemType> & another) const
{
	LinkedBag<ItemType> temp;
	vector<ItemType> thisVec(itemCount);
	thisVec = toVector();
	vector<ItemType> anotherVec(another.getCurrentSize());
	anotherVec = another.toVector();

	for (int i = 0; i < itemCount; i++) {
		for (int j = 0; j < another.getCurrentSize(); j++) {
			int thisCur = thisVec[i];
			int anotherCur = anotherVec[j];
			if (thisCur == anotherCur) {
				temp.add(thisCur);
			}
		}
	}

	return temp;
}

/* Pseudocode for Intersection:

LinkedBag intsersection(another bag) {
Temporary LinkedBag<int>;
Two vectors containing the vector equivalent of the LinkedBags that are being analysed for intersecting elements
A for loop (int i) {
Another for loop (int j) {
if statement that determines if the selected values in each vector are the same
if yes, add intersecting value to new LinkedBag
}
}
return Temporary LinkedBag;
}

*/



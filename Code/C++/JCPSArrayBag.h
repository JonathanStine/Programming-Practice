/** Header file for an array-based implementation of the ADT bag.
@file ArrayBag.h */
# ifndef _ARRAY_BAG
# define _ARRAY_BAG
# include "JCPSBagInterface.h"
template < class ItemType >
class ArrayBag :
	public BagInterface < ItemType >
{
private:
	static const int DEFAULT_CAPACITY = 25; // Small size to test for a full bag
	ItemType items[DEFAULT_CAPACITY]; // Array of bag items
	int itemCount=0; // Current count of bag items
	int maxItems=DEFAULT_CAPACITY; // Max capacity of the bag

				  // Returns either the index of the element in the array items that
				  // contains the given target or -1, if the array does not contain
				  // the target.
	int getIndexOf(const ItemType & target) const;
public:
	ArrayBag() {};
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType & newEntry);
	bool remove(const ItemType & anEntry);
	void clear();
	bool contains(const ItemType & anEntry) const;
	int getFrequencyOf(const ItemType & anEntry) const;
	vector < ItemType > toVector() const;
	vector <ItemType> intersection(const ArrayBag<ItemType> & bag);
};  // end ArrayBag

# endif

/* Pseudocode
class arraybag implements baginterface {
	Blank arraybag constructor {}
	int getcurrentsize gets the current size, or number of items currently stored
	bool isempty determines if the arraybag is empty
	add adds an alement to the array bag
	remove removes an element from the array bag
		it removes the element and moves every element after it down one index
	clear removes all elements and replaces them with null
	contains returns true if the arraybag contains the specified element
	getfrequencyof returns the number of times an element is stored in a bag
	toVector returns a vector format of an arraybag
	intersection returns an array of the elements that appear in the arraybag the method is in and the arraybag passed to the method.
}











*/

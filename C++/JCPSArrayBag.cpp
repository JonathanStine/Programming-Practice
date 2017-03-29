#include "JCPSArrayBag.h"
#include <vector>

using namespace std;

	template<class ItemType>
	ArrayBag<ItemType>::ArrayBag()
	{
		//items = bag;
		//itemCount = 0;
		//maxCount = DEFAULT_CAPACITY;
	}

	template<class ItemType>
	int ArrayBag<ItemType>::getCurrentSize() const
	{
		int count = 0;
		while (items[i] != null) {
			count++;
		}
		return count;
	}

	template<class ItemType>
	bool ArrayBag<ItemType>::isEmpty() const
	{
		int count = 0;
		for (int i = 0; i <= maxItems; i++) {
			if (items[i] != null) {
				count++;
			}
		}
		if (count == 0) {
			return true;
		}
		return false;
	}

	template<class ItemType>
	bool ArrayBag<ItemType>::add(const ItemType & newEntry)
	{
		if (maxItems != itemCount) {
			items[itemCount + 1] == newEntry;
			itemCount++;
			return true;
		}
		return false;
	}

	template<class ItemType>
	bool ArrayBag<ItemType>::remove(const ItemType & anEntry)
	{
		int index = getIndexOf(anEntry);
		if (index != null) {
			items[index] == null;
			int numOfEntriesAfter = itemCount - (index + 1);
			for (int i = 0; i <= numOfEntriesAfter; i++) {
				items[i + index] == items[i + index + 1];
			}
			return true;
		}
		return false;
	}

	template<class ItemType>
	void ArrayBag<ItemType>::clear() {
		for (int i = 0; i <= maxCount - 1; i++) {
			items[i] = null;

		}

	}

	template<class ItemType>
	bool ArrayBag<ItemType>::contains(const ItemType & anEntry) const
	{
		int index = getIndexOf(anEntry);
		if (index != null) {
			return true;
		}
		return false;
	}


	template<class ItemType>
	int ArrayBag<ItemType>::getFrequencyOf(const ItemType & anEntry) const
	{
		int frequency = 0;
		for (int i = 0; i <= itemCount - 1; i++) {
			if (items[i] == anEntry) {
				frequency++;
			}
		}
		return frequency;
	}

	template<class ItemType>
	vector<ItemType> ArrayBag<ItemType>::toVector() const
	{	
		vector<Itemtype> vecItems(maxItems);
		for (int i = 0; i < maxItems; i++) {
			vecItems[i] = items[i];
		}
		return vecItems;
	}

	template<class ItemType>
	ArrayBag<ItemType> ArrayBag<ItemType>::intersection(const ArrayBag<ItemType>& bag)
	{
		ArrayBag<ItemType> toReturn();
		int toReturnIndex;
		vector<ItemType> vecBag(bag.itemCount);
		vecBag = bag.toVector();
		for (int i = 0; i <= itemCount; i++) {
			for (int j = 0; j <= bag.getCurrentSize(); j++) {
				if (items[i] == vecBag[j]) {
					toReturn[toReturnIndex] = vecBag[j];
					toReturnIndex++;
				}
			}
		}
		return toReturn;
	}

	template<class ItemType>
	int ArrayBag<ItemType>::getIndexOf(const ItemType & target) const
	{
		int index = null;
		for (int i = 0; i <= itemCount - 1; i++) {
			if (items[i] == target) {
				index = i;
			}

		}
		return index;
	}

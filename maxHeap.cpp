#include "maxHeap.h"

MaxHeap::MaxHeap() {
	heapSize = 0;
}

void MaxHeap::build(std::vector<int>& theVec) {
	heapSize = theVec.size();
	for (int i = (theVec.size() / 2); i >= 0; i--) {
		heapify(theVec, i);
	}
}

void MaxHeap::heapify(std::vector<int>& theVec, int index) {
	int lChild = left(index);
	int rChild = right(index);
	int largest = index;
	if (lChild < heapSize && theVec[lChild] > theVec[index]) {
		largest = lChild;
	}
	if (rChild < heapSize && theVec[rChild] > theVec[largest]) {
		largest = rChild;
	}
	if (largest != index) {
		int temp = theVec[index];
		theVec[index] = theVec[largest];
		theVec[largest] = temp;
		heapify(theVec, largest);
	}
}

int MaxHeap::left(int index) {
	return (index + 1) * 2 - 1;
}

int MaxHeap::right(int index) {
	return (index + 1) * 2;
}
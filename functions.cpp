#include "functions.h"
#include "maxheap.h"

std::vector<int> generateIntArrayFromInput(int argCount, char* args[]) {
	std::vector<int> theList;
	if (argCount >= 3) {
		for (int i = 2; i < argCount; i++) {
			theList.push_back(atoi(args[i]));
		}
	}
	return theList;
}

void heapSort(std::vector<int>& theVec) {
	MaxHeap* heap = new MaxHeap();
	heap->build(theVec);
	for (int i = theVec.size() - 1; i >= 1; i--) {
		int temp = theVec[0];
		theVec[0] = theVec[i];
		theVec[i] = temp;
		heap->heapSize = heap->heapSize - 1;
		heap->heapify(theVec, 0);
	}

	delete heap;
}
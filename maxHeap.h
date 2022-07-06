#ifndef _MAXHEAP_H
#define _MAXHEAP_H

#include <vector>

class MaxHeap {
private:
	int left(int index);
	int right(int index);
public:
	int heapSize;

	MaxHeap();
	void build(std::vector<int>&);
	void heapify(std::vector<int>&, int);
};

#endif
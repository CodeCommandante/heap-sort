#include <iostream>
#include <cmath>
#include <fstream>
#include "functions.h"

int main(int argc, char* argv[])
{
	if (argc >= 2) {
		std::vector<int> myArray = generateIntArrayFromInput(argc, argv);
		heapSort(myArray);
		for (int i = 0; i < myArray.size(); i++) {
			std::cout << myArray[i] << " ";
		}
		myArray.clear();
	}

	return 0;
}

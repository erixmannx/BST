#include <stdlib.h>
#include <stdio.h>
#include <cstddef>
#include <time.h>
#include "BST.h"

using namespace com::github::erixmannx::BST;

static BST<int>* intTree = new BST<int>();

int main(int argc, char** argv) {
	int COUNT = 100;
	
	srand(time(NULL));	
	
	printf("\n<---------------------------------->\n");
	for (int x = 0; x < COUNT; x++) {
		int toAdd = rand() % 100;
		printf("%d ", toAdd);
		intTree->add(toAdd);
	}

	printf("\n<---------------------------------->\n");
	intTree->print();
	printf("\n<---------------------------------->\n");

	while(true) {
		int find = 0;
		printf("\nWhat to Find: ");
		scanf("%d", &find);

		bool found = intTree->find(find);
        	if (found == true) {
                	printf("FOUND %d\n", find);
        	} else {
                	printf("NOT FOUND %d\n", find);
        	}
	}

	return 0;
}

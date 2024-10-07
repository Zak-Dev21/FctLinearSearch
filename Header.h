#ifndef Header_h
#define Header_h

#include <iostream>

int list[4] = { 2, 5, 4, 1 };

int target_val = 4;

int linearsearch(int list[]) {
	for (int i = 0; i < 4; i++) {
		if (list[i] == target_val) {
			return i;
		}	
	}
	return -1;
}




#endif // !Header_h


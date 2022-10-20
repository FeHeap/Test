#include <stdio.h>
#include <stdlib.h>

int FIB_iter(int i) {
	if(i == 0) {
		return 0;
	}
	else if(i == 1) {
		return 1;
	}
	else if(i > 1) {
		int top_next = 0;
		int top = 1;
		int temp;
		while(i >= 2) {
			int temp = top;
			top = top + top_next;
			top_next = temp;
			i--;
		}
		return top;
	}
	else {
		return -1;
	}
}


int FIB_re(int i, int top_next, int top) {
	if(i == 1) {
		return top_next + top;
	}
	else {
		return FIB_re(i-1, top, top_next + top);
	}
}
int FIB_recur(int i) {
	if(i == 0) {
		return 0;
	}
	else if(i == 1) {
		return 1;
	}
	else if(i > 1) {
		return FIB_re(i-1, 0, 1);
	}
	else {
		return -1;
	}
}


int main() {
	printf("FIB(1) %d\n", FIB_iter(1));
	printf("FIB(3) %d\n", FIB_iter(3));
	printf("FIB(5) %d\n", FIB_iter(5));
	printf("FIB(7) %d\n\n", FIB_iter(7));
	
	printf("FIB(1) %d\n", FIB_recur(1));
	printf("FIB(3) %d\n", FIB_recur(3));
	printf("FIB(5) %d\n", FIB_recur(5));
	printf("FIB(7) %d\n", FIB_recur(7));

	
	system("PAUSE");
	return 0;	
}



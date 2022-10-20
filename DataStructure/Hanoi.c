#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char A, char B, char C) {
	if(n == 1) {
		printf("move disc %d from %c to %c\n", n, A, C);
	}
	else {
		Hanoi(n-1, A, C, B);
		printf("move disc %d from %c to %c\n", n, A, C);
		Hanoi(n-1, B, A, C);
	}
}

int main() {
	Hanoi(2, 'A', 'B', 'C');
	printf("\n");
	Hanoi(3, 'A', 'B', 'C');
	printf("\n");
	Hanoi(4, 'A', 'B', 'C');
	printf("\n");
	
	system("PAUSE");
	return 0;	
}



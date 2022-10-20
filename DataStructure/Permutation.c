#include <stdio.h>
#include <stdlib.h>

#define SWAP(X, Y) swap(&X, &Y)

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void perm(char *list, int i, int n) {
	int j, temp;
	if(i == n) {
		for(j = 0; j <= n; j++) {
			printf("%c ", list[j]);
		}
		printf("\n");
	}
	else {
		for(j = i; j <= n; j++) {
			SWAP(list[i], list[j]);
			perm(list, i+1, n);
			SWAP(list[i], list[j]);
		}
	}
}

int main() {
	char a_list[] = {'a', 'b', 'c'};
	perm(a_list, 0, 2);
	printf("\n");
	
	char b_list[] = {'a', 'b', 'c', 'd'};
	perm(b_list, 0, 3); 
	
	system("PAUSE");
	return 0;	
}



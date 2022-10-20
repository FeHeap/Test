#include <stdio.h>
#include <stdlib.h>

int GCD_iter(int a, int b) {
	int r;
	while(b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int GCD_recur(int a, int b) {
	if(b != 0) {
		return GCD_recur(b, a%b);
	}
	else {
		return a;
	}
}

int main() {
	printf("gcd(100, 20): %d\n", GCD_iter(100, 20));
	printf("gcd(20, 100): %d\n", GCD_iter(20, 100));
	printf("gcd(97, 66): %d\n\n", GCD_iter(97, 66));
	
	printf("gcd(100, 20): %d\n", GCD_recur(100, 20));
	printf("gcd(20, 100): %d\n", GCD_recur(20, 100));
	printf("gcd(97, 66): %d\n\n", GCD_recur(97, 66));
	
	system("PAUSE");
	return 0;	
}



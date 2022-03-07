#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
	if (a > b) {
		gcd(a - b, b);
	}
	else if (b > a) {
		gcd(b - a, a);
	}
	if (a == 0) {
		return b;
	}
	if (b == 0) {
		return a;
	}
}

int main() {
	printf("%d", gcd(280, 30));
}
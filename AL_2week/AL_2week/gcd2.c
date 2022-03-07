#include <stdio.h>

int gcd(int a, int b) {
	while (a) {
		if (a < b) {
			int val;
			val = a;
			a = b;
			b = val;
		}
	}
	return a;
}
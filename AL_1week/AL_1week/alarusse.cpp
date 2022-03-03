#include <stdio.h>
#include "alarusse.h"
#define SHIFT

#ifndef SHIFT
int alar(int A, int B) {
	int result = 0;
	int C = 0;
	while (A != 1) {
		if (A % 2 == 1) {
			C = B;
			result += C;
		}
		A /= 2;
		B *= 2;
		printf("A=%d, B=%d, C=%d\n", A, B, C);
		printf("result=%d\n", result);
	}
	if (A == 1) {
		result += B;
	}
	return result;
}
#endif

#ifdef SHIFT
int alar(int A, int B) {
	int result = 0;
	int C = 0;
	int k = 0;
	while (A!=1) {
		if (A % 2 == 1) {
			C = B;
			result += C;
		}
		A = A >> 1;
		B = B << 1;
	}
	if (A == 1) {
		result += B;
	}
	return result;
}
#endif
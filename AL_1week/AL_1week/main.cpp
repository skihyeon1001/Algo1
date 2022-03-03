#include <stdio.h>
#include "alarusse.h"

int main() {
	int A = 0, B = 0;
	int result = 0;
	scanf_s("%d %d", &A, &B);
	result = alar(A, B);
	printf("%d", result);
	return 0;
}


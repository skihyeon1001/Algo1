#include <stdio.h>
#include <stdlib.h>

void Eratos(int N) {
	int* arr = (int*)calloc(N, sizeof(int));
	if (arr == NULL) return;
	for (int i = 2; i <= N; i++) {
		if (arr[i] != 0) continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 1;
		}
	}
	for (int k = 2; k <= N; k++) {
		if (arr[k] == 0) {
			printf("%d\n", k);
		}
	}
}

int main() {
	int num;
	scanf_s("%d", &num);
	Eratos(num);
}
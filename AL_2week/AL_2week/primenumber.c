#include <stdio.h>

int Erot(int N) {
	int* arr;
	arr = (int*)calloc(N, sizeof(int));

	for (int i = 2; i <= N; i++) {
		if (arr[i] != 0) continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 1;
		}
	}
	for (int k = 2; k <= N; k++) {
		printf("%d\n", arr[k]);
	}
}

int main() {
	int num;
	scanf_s("%d", &num);
	Erot(num);
}
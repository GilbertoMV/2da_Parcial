#include <stdio.h>
#include <stdlib.h>

void bubble(int A[], int tam) {
    
	for (int i = 0; i < tam - 1; i++) {
		int min = i;
		for (int j = i+1; j < tam; j++) {
			if (A[j] < A[min]) 
				min = j;
		}
		if (min != i) 
			swap(&A[min], &A[i]);
	}
}
void swap(int *a, int *b) {
    
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int n = 10;
	int list[] = {7, 3, 3, 6, 2, 1, 8, 9, 10, 15};
	bubble(list, n);
	for (int i = 0; i < n; i++) 
		printf("%d\n", list[i]);
	return 0;
}
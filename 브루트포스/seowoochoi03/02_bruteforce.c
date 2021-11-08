#include <stdio.h>

int main() {
	int max = 0;
	int N, M, sum;
	scanf_s("%d %d", &N, &M);
	int numArr[100];
	for (int i = 0; i < N; i++)
		scanf_s("%d", &numArr[i]);
	
	for (int j=0; j<N; j++)
		for (int k=j+1; k<N; k++)
			for (int z = k+1; z < N; z++) {
				sum = numArr[j] + numArr[k] + numArr[z];
				if (sum > M)
					sum = 0;
				else {
					if (max > sum)
						sum = 0;
					else {
						max = sum;
						sum = 0;
					}
				}
			}
	printf("%d", max);

	return 0;
}

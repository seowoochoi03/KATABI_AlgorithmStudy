#선택정렬
```c
#include <stdio.h>

int main() {
	int N,cha,min,i,j,k;
	scanf_s("%d", &N); //정렬해줄 N개 입력받기
	int numArr[1000]; //N을 최대 1000까지 입력 가능하므로 배열 크기도 1000으로 지정

	for (i = 0; i < N; i++) 
		scanf_s("%d", &numArr[i]); //N개 만큼의 숫자 입력받기

	for (j = 0; j < N - 1; j++) { //선택 정렬 코드 구현
		min = j;
		for (k = j + 1; k < N; k++) {
			if (numArr[min] > numArr[k])
				min = k;
		}
		cha = numArr[j];  //위치 바꾸기
		numArr[j] = numArr[min];
		numArr[min] = cha;
	}
	
	for (i = 0; i < N; i++)
		printf("%d\n", numArr[i]); //오름차순으로 정렬한 결과 출력

	return 0;
}
```
#삽입정렬
```c
#include <stdio.h>

int main() {
	int N,cha,min,i,j,k;
	scanf_s("%d", &N); //정렬해줄 N개 입력받기
	int numArr[1000]; //N을 최대 1000까지 입력 가능하므로 배열 크기도 1000으로 지정

	for (i = 0; i < N; i++) 
		scanf_s("%d", &numArr[i]); //N개 만큼의 숫자 입력받기

	for (j = 1; j < N; j++) { //삽입 정렬 코드 구현
		min = numArr[j];
		k = j - 1;
		while (k >= 0 && numArr[k]>min) {
			numArr[k+1] = numArr[k]; //앞순서와 위치바꾸기
			k--;
		}
		numArr[k + 1] = min;
	}
	
	for (i = 0; i < N; i++)
		printf("%d\n", numArr[i]); //오름차순으로 정렬한 결과 출력

	return 0;
}
```
#버블정렬
```c
#include <stdio.h>

int main() {
	int N,cha;
	scanf_s("%d", &N); //정렬해줄 N개 입력받기
	int numArr[1000]; //N을 최대 1000까지 입력 가능하므로 배열 크기도 1000으로 지정

	for (int i = 0; i < N; i++) 
		scanf_s("%d", &numArr[i]); //N개 만큼의 숫자 입력받기

	for (int j=0; j<N-1; j++) //버블 정렬 코드 구현
		for (int k = 0; k < N-j-1; k++) {
			if (numArr[k+1] < numArr[k]) {
				cha = numArr[k+1];  //위치 바꾸기
				numArr[k+1] = numArr[k];
				numArr[k] = cha;
			}
		}
	
	for (int i = 0; i < N; i++)
		printf("%d\n", numArr[i]); //오름차순으로 정렬한 결과 출력

	return 0;
}
```
#정렬...?
```c
#include <stdio.h>

int main() {
	int N,cha;
	scanf_s("%d", &N); //정렬해줄 N개 입력받기
	int numArr[1000]; //N을 최대 1000까지 입력 가능하므로 배열 크기도 1000으로 지정

	for (int i = 0; i < N; i++) 
		scanf_s("%d", &numArr[i]); //N개 만큼의 숫자 입력받기

	for (int j=0; j<N-1; j++) //버블 정렬 코드 구현
		for (int k = j + 1; k < N; k++) {
			if (numArr[j] > numArr[k]) {
				cha = numArr[j];  //위치 바꾸기
				numArr[j] = numArr[k];
				numArr[k] = cha;
			}
		}
	
	for (int i = 0; i < N; i++)
		printf("%d\n", numArr[i]); //오름차순으로 정렬한 결과 출력

	return 0;
}
```

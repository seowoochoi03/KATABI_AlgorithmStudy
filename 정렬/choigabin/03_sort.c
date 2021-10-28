#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, i, j, min, temp = 0;
	int arr[1000] = { 0 }; //N(1 ≤ N ≤ 1,000) 이므로 1000짜리 배열 선언

	//첫번째 입력으로 N 받기 
	printf("정수 N 입력 : ");
	scanf("%d", &N);

	//입력받은 N개의 정수를 arr[] 배열에 넣어주기 
	printf("%d개의 정수 입력 : ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) { //첫 회전 기준 -> 배열의 첫 번째 요소 
		for (j = i + 1; j < N; j++) { //첫 회전 기준 -> 배열의 두 번째 요소 
			if (arr[i] > arr[j]) { //앞의 요소가 뒤의 요소보다 크다면
				//두 요소의 값을 교환
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//arr 배열의 요소 출력 
	printf("정렬 완료! : ");
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}

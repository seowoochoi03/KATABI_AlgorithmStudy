#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, M, i, j, k, sum;
	int near=0;
	int arr[100] = { 0 }; //N(3 ≤ N ≤ 100) 이므로 100짜리 배열 선언

	//첫번째 입력으로 N과 M 받기 
	printf("정수 N M 입력 : ");
	scanf("%d %d", &N, &M);

	//N개의 숫자를 입력받아 arr[] 배열에 넣어주기 
	printf("%d 개의 숫자를 입력 : ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) { //첫번째 카드 
		for (j = i + 1; j < N; j++) { //두번째 카드
			for (k = j + 1; k < N; k++) { //세번째 카드
				sum = arr[i] + arr[j] + arr[k]; //카드 1+2+3의 값을 sum에 넣기 

				if (sum <= M && near < sum) { //sum은 M보다 작거나 같고, 근접한 값이 sum보다 작으면
					near = sum;
				}
			}//end of for(k)
		}//end of for(j)
	}//end of for(i)

	printf("블랙잭 : %d", near);
}

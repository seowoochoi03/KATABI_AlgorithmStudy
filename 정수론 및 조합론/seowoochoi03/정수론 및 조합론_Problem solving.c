#include <stdio.h>

int main() {
	int N = 0, cha,a,b;
	int Arr[100]; //입력 N을 최대 100으로 설정 할 수 있으므로

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) 
		scanf_s("%d", &Arr[i]);

	for (int i = 1; i < N; i++) {
		a = Arr[0];
		b = Arr[i];
		if (a < b) { //a와 b 중 더 큰수를 a 변수에 집어넣기
			cha = a;
			a = b;
			b = cha;
		}
		while (b != 0) { //최대공약수 구하기
			cha = a % b;
			a = b;
			b = cha;
		}

		printf("%d/%d\n", Arr[0]/a, Arr[i]/a); //기약분수 형태로 출력
	}

	return 0;
}

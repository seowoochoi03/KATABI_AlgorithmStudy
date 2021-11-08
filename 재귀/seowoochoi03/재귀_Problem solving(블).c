#include <stdio.h>

void square(int i, int j, int N) {
  if ((i % 3 == 2) && (j % 3 == 2)) {
printf(" ");
}
  else {
    if (j == N+1) {
      printf("\n");
    }
    else {
      printf("*");
    }
  }
}
int main() {
  int N;
  scanf_s("%d", &N);
  int i, j;
  for (i = 1; i <= N; i++)
    for (j = 1; j <= N+1; j++)
        square(i, j, N);
}

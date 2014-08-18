#include <stdio.h>

int main() {

	int i = 0, j = 0;

	printf("두개의 정수를 입력받습니다.\n");

	scanf("%d", &i);
	scanf("%d", &j);

	printf("두 수의 덧셈 : %d + %d = %d\n", i, j, i+j);
	printf("두 수의 뺄셈 : %d - %d = %d\n", i, j, i-j);

	return 0;
}
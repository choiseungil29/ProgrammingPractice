#include <stdio.h>

int main() {

	int num1, num2;

	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("몫 : %d\n", num1/num2);
	printf("나머지 : %d\n", num1%num2);

	return 0;
}
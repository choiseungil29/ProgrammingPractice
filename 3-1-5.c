#include <stdio.h>

int main() {

	int num1, num2, num3;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	printf("%d", (num1-num2)*(num2+num3)*(num3%num1));

	return 0;
}
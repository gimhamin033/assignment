#include <stdio.h>

int main(void)
{
	int x;
	int hundred;
	int ten;
	int one;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	hundred = x / 100;
	printf("백의 자리수: %d \n", hundred);

	ten = (x - hundred * 100) / 10;
	printf("십의 자리수: %d \n", ten);

	one = (x - hundred * 100 - ten * 10) / 1;
	printf("일의 자리수: %d \n", one);

	return 0;
}
#include <stdio.h>
int main(void)
{
	int num;
	int sosu;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	
	if (num <= 7)
	{
		if (num == 2 || num == 3 || num == 5 || num == 7)
			printf("%d은 소수 입니다.\n", num);
		else
			printf("%d은 소수가 아닙니다.\n", num);
	}
	if (num > 7)
	{
		if (num % 2 == 0 ||num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
			printf("%d은 소수가 아닙니다.\n", num);
		else
			printf("%d은 소수 입니다.\n", num);
	}

	return 0;
	
}
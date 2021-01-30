#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int average;

	printf("정수를 입력하시오 :");
	scanf("%d", &x);

	printf("정수를 입력하시오 :");
	scanf("%d", &y);

	printf("정수를 입력하시오 :");
	scanf("%d", &z);

	average = x / 3 + y / 3 + z / 3;
	printf("평균은 %d입니다. \n", average);

	return 0;
}

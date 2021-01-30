#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float max(float a, float b);

float max(float a, float b)
{
	float c;
	if (a > b) 
		c = a;
	else 
		c = b;
	return c;
}

int main(void) {
	float a=0;
	float b=0;
	float c=0;

	printf("두 개의 실수를 space로 구분하여 입력하세요 ==> ");
	scanf("%f %f", &a, &b);

	printf("%.2f가 큰 수 입니다.\n", max(a, b));

	getch();
	return 0;

}
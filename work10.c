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

	printf("�� ���� �Ǽ��� space�� �����Ͽ� �Է��ϼ��� ==> ");
	scanf("%f %f", &a, &b);

	printf("%.2f�� ū �� �Դϴ�.\n", max(a, b));

	getch();
	return 0;

}
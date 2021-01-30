#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rectangle(int a, int b);

float triangle(int a, int b);

int rectangle(int a, int b) {
	int area;
	area = a * b;
	return area;
}

float triangle(int a, int b) {
	float area;
	area = a * b / 2;
	return area;
}

int main(void) {

	int a = 0;
	int b = 0;

	printf("밑변과 높이를 공백문자를 이용하여 입력하세요\n");
	scanf("%d %d", &a, &b);

	printf("사각형의 넓이는 %d, 삼각형의 넓이는 %.2f 입니다.", rectangle(a, b), triangle(a,b));
	
	getch();
	return 0;
}


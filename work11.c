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

	printf("�غ��� ���̸� ���鹮�ڸ� �̿��Ͽ� �Է��ϼ���\n");
	scanf("%d %d", &a, &b);

	printf("�簢���� ���̴� %d, �ﰢ���� ���̴� %.2f �Դϴ�.", rectangle(a, b), triangle(a,b));
	
	getch();
	return 0;
}


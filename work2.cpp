#define NUL "���̴�"
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int line, height, radius;
	float sam, circle;

	printf("�ﰢ�� �غ� �� ���̸� ������ ����Ͽ� �Է��ϼ���==>");
	scanf("%d %d", &line, &height);
	sam = (float)line * height / 2;
	printf("�ﰢ���� %s %.2f�Դϴ�. \n", NUL, sam);

	printf("���� �������� �Է��ϼ���==>");
	scanf("%d", &radius);
	circle = (float)3.14 * radius * radius;
	printf("���� %s %.2f�Դϴ�. \n",NUL, circle);

	return 0;
}
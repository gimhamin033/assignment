#include <stdio.h>

int main(void)
{
	int x;
	int hundred;
	int ten;
	int one;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	hundred = x / 100;
	printf("���� �ڸ���: %d \n", hundred);

	ten = (x - hundred * 100) / 10;
	printf("���� �ڸ���: %d \n", ten);

	one = (x - hundred * 100 - ten * 10) / 1;
	printf("���� �ڸ���: %d \n", one);

	return 0;
}
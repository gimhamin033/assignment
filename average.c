#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int average;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &x);

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &y);

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &z);

	average = x / 3 + y / 3 + z / 3;
	printf("����� %d�Դϴ�. \n", average);

	return 0;
}

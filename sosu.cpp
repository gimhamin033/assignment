#include <stdio.h>
int main(void)
{
	int num;
	int sosu;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	
	if (num <= 7)
	{
		if (num == 2 || num == 3 || num == 5 || num == 7)
			printf("%d�� �Ҽ� �Դϴ�.\n", num);
		else
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
	}
	if (num > 7)
	{
		if (num % 2 == 0 ||num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
		else
			printf("%d�� �Ҽ� �Դϴ�.\n", num);
	}

	return 0;
	
}
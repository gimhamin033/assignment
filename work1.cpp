#define INPUT "�Է��ϼ���====>"
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char name[100];
	int num;
	float left;
	float right;
	char blood;

	printf("<������ ���� ���α׷�> \n");
	printf("�̸��� %s ", INPUT);
	scanf("%s", name);
	printf("�й��� %s ", INPUT);
	scanf_s("%d", &num);
	printf("������ �÷��� %s ", INPUT);
	scanf_s("%f", &left);
	printf("���� �÷��� %s ", INPUT);
	scanf_s("%f", &right);
	printf("�������� %s ", INPUT);
	scanf("%c", &blood);
	getchar();

	printf("\n===== ������ ======\n");
	printf("�̸� : %s \n", name);
	printf("�й� : %d \n", num);
	printf("������ �÷� : %.1f \n", right);
	printf("���� �÷� : %.1f \n", left);
	printf("������ : %c", blood);
	getchar();
	printf("===================\n");


	return 0;
}
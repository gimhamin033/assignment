#include <stdio.h>

void one(int x) {
	puts("<���� �ֹ� �� �ݾ� : 16000��>\n");
}
void two(int x) {
	puts("<���� �ֹ� �� �ݾ� : 18000��>\n");
}
void three(int x) {
	puts("<���� �ֹ� �� �ݾ�: 20000��>\n");
}
void four(int x) {
	puts("<���� �ֹ� �� �ݾ�: 22000��>\n");
}
void one1(int x) {
	puts("<���� �ֹ� �� �ݾ� : 19000��>\n");
}
void one2(int x) {
	puts("<���� �ֹ� �� �ݾ� : 20000��>\n");
}
void one3(int x) {
	puts("<���� �ֹ� �� �ݾ�: 22000��>\n");
}
void two1(int x) {
	puts("<���� �ֹ� �� �ݾ�: 21000��>\n");
}
void two2(int x) {
	puts("<���� �ֹ� �� �ݾ� : 22000��>\n");
}
void two3(int x) {
	puts("<���� �ֹ� �� �ݾ�: 24000��>\n");
}
void three1(int x) {
	puts("<���� �ֹ� �� �ݾ�: 25000��>\n");
}
void three2(int x) {
	puts("<���� �ֹ� �� �ݾ� : 26000��>\n");
}
void three3(int x) {
	puts("<���� �ֹ� �� �ݾ� : 28000��>\n");
}
int main(void) {

	int number;
	puts("���� ��������� ���Ű��� ȯ���մϴ�!! \n");
	puts("======= Main Menu =======");
	puts("1. ���� �Ľ�Ÿ : 16000��");
	puts("2. ���� �Ľ�Ÿ : 18000��");
	puts("3. �������� ����: 20000��");
	puts("4. �������� ����: 22000��");
	puts("========================= \n");

	printf("���� �޴��� �����ϼ��� : ");
	scanf_s("%d", &number);
	switch (number)
	{
	case 1:
		one(number);
		break;
	case 2:
		two(number);
		break;
	case 3:
		three(number);
		break;
	case 4:
		four(number);
		break;
	default:
		printf("�߸� �����̽��ϴ�, \n");
	}

	int num;
	puts("======= Drink Menu ======= \n");
	puts("1. �Ҵ� : 3000�� \n");
	puts("2. ���̵� : 4000�� \n");
	puts("3. ������ �ֽ� : 6000�� \n");
	puts("========================== \n");

	printf("���Ḧ �����ϼ��� : ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		one1(num);
		break;
	case 2:
		one2(num);
		break;
	case 3:
		one3(num);
		break;
	case 4:
		two1(num);
		break;
	case 5:
		two2(num);
		break;
	case 6:
		two3(num);
		break;
	case 7:
		three1(num);
		break;
	case 8:
		three2(num);
		break;
	case 9:
		three3(num);
		break;
	default:
		printf("�߸� �����̽��ϴ�, \n");
	}
	printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");

	return 0;
}
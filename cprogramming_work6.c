#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int menu = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int price = 0;


	printf("�������. ���� ������� ���� ���α׷��Դϴ�.\n");
	printf("�丮�� �ο� ������ �����մϴ�.\n \n");

	do {
		printf("======================\n");
		printf("1. A�ڽ�: 30000��\n");
		printf("2. B�ڽ�: 20000��\n");
		printf("3. C�ڽ�: 10000��\n");
		printf("4. ���� ����\n");
		printf("======================\n \n");

		printf("�޴��� �������ּ���. ==> ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("������ �丮�� ������ �ο��� �Է����ּ���. ==> ");
			scanf("%d", &num1);
			break;
		case 2:
			printf("������ �丮�� ������ �ο��� �Է����ּ���. ==> ");
			scanf("%d", &num2);
			break;
		case 3:
			printf("������ �丮�� ������ �ο��� �Է����ּ���. ==> ");
			scanf("%d", &num3);
			if (num1 + num2 + num3 > 10) {
				printf("\n�ִ� ���� �ο� 10���� �ʰ��ϰ� �Ǿ ������ ������ �� �����ϴ�.\n");
				printf("���� ������ �ο��� %d���Դϴ�. �ٽ� �������ּ���.\n", num1 + num2 + num3 - 10);
			}
			break;
		case 4:
			printf("�ֹ��� ����Ǿ����ϴ�.\n \n");
			printf("A�ڽ�: %d��, B�ڽ�: %d��, C�ڽ�: %d�� \n", num1, num2, num3);
			printf("�� �ݾ��� %d�� �Դϴ�.\n \n", num1 * 30000 + num2 * 20000 + num3 * 10000);
			break;
		default:
			printf("�߸� �����̽��ϴ�. �ٽ� �������ּ���.\n");
		}
	} while (menu != 4);

	return 0;
}

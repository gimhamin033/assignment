#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int movie = 0;
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int price = 0;

	printf("���� �ó׸��� ���� ���� ȯ���մϴ�.\n");

	do {
		printf("================\n");
		printf("1. ���� ������ ��\n");
		printf("2. ������ ����\n");
		printf("3. Ÿ��Ÿ��<3D>\n");
		printf("4. �ڳ�-�����ǽô�\n");
		printf("================\n");

		printf("\n������ ��ȭ ��ȣ�� �Է��ϼ���.<���� ���� :0��> ==> ");
		scanf("%d", &movie);

		switch (movie) {
		case 0:
			printf("\n���Ÿ� �����մϴ�.\n");
			printf("1. ���� ������ �� \n : %d�� \n", num1);
			printf("2. ������ ���� \n : %d�� \n", num2);
			printf("3. Ÿ��Ÿ��<3D> \n : %d�� \n", num3);
			printf("4. �ڳ�-�����ǽô� \n : %d�� \n", num4);
			printf("\n�� ���� �ݾ��� %d�� �Դϴ�.\n", 10000*(num1+num2+num3));
			break;
		case 1:
			printf("������ ��ȭ �ż��� �Է��ϼ���.==> ");
			scanf("%d", &num1);
			break;
		case 2:
			printf("������ ��ȭ �ż��� �Է��ϼ���.==> ");
			scanf("%d", &num2);
			break;
		case 3:
			printf("������ ��ȭ �ż��� �Է��ϼ���.==> ");
			scanf("%d", &num3);
			if (num1 + num2 + num3 > 10) {
				printf("\n�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
				printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n", 10 - num1 - num2);
			}
			break;
		case 4:
			printf("������ ��ȭ �ż��� �Է��ϼ���.==> ");
			scanf("%d", &num4);
			break;
		default:
			printf("�߸� �����̽��ϴ�.\n");
			break;
		}
		/*if (howmany1 + howmany2 + howmany3 + howmany4 > 10) {
			printf("�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
			printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n", howmany1 + howmany2 + howmany3 + howmany4 - 10);
		}*/
	} while (movie != 0);

	return 0;

}
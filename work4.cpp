#include <stdio.h>
#pragma warning(disable:4996)
#define M1 "1. ���� ������ ��\n"
#define M2 "2. ������ ����\n"
#define M3 "3. Ÿ��Ÿ��(3D)\n"
#define M4 "4. �ڳ�-�����ǽô�\n"

int main(void) {
	int age, num;
	char name[20];

	printf("���� �ó׸��� ���Ű��� ȯ���մϴ�.\n\n");
	printf("�������� �̸� �� ���̸� ���鹮�ڷ� �����Ͽ� �Է��ϼ���. ==>");
	scanf("%s %d", name, &age);

	printf("ȫ�浿 ���� ���� ������ ��ȭ�Դϴ�.\n\n");
	printf("======================\n");
	if (age >= 18) {
		printf("%s", M1);
		printf("%s", M2);
		printf("%s", M3);
		printf("%s", M4);

	}
	else if (age >= 15) {
		printf("%s", M1);
		printf("%s", M2);
		printf("%s", M3);
	}
	else if (age >= 12 && age < 15) {
		printf("%s", M1);
		printf("%s", M2);
	}
	else if (age < 12) {
		printf("%s", M1);
	}
}
printf("======================\n\n");
printf("���ϴ� ��ȭ ��ȣ�� �Է��ϼ���. ==>");
scanf("%d", &num);

if (age >= 18) {
	if (num >= 4) {
		printf("�߸� �����̽��ϴ�.");
	}
}
else if (age >= 12 && age < 15) {
	if (num >= 3) {
		printf("�߸� �����̽��ϴ�.");
	}
}
else if (age < 12) {
	if (num >= 2) {
		printf("�߸� �����̽��ϴ�.");
	}

	printf("���Ű� ����˴ϴ�.\n");

	return 0;

}
#pragma comment(lib, "dsound.lib")
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STD 30
#define CUR 3

int main(void) {
	int i = 0, j = 0;
	int num, score[STD][CUR];
	float avg[STD], total = 0;
	char name[STD][10];

	printf("�л� ���� �Է��ϼ���==>");
	scanf("%d", &num);

	while (i < num) {
		printf("\n==============================\n");
		printf("�л��� �̸��� �Է��ϼ���.\n");
		scanf("%s", name[i]);
		printf("\n�л��� ���� ���� ���� ������ ���͸� �̿��Ͽ� �Է��ϼ���.\n");
		j = 0;
		while (j < CUR) {
			scanf("%d", &score[i][j]);
			total += score[i][j];
			j++;
		}
		avg[i] = total / 3;
		total = 0;
		i++;
	}
	for (i = 0; i < num; i++) {
		printf("%s �л��� ����� %.2f ���Դϴ�. \n", name[i], avg[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[3][4];
	double score_avg[4] = { '\n'};

	printf("���� ���� �ý����Դϴ�. \n\n");

	for (int i = 0; i < 3; i++) {
		printf("%d��° �л��� 4������(����, ����, ����, ����)������ �Է��ϼ���.\n", (i + 1));

		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			score_avg[j] += score[i][j];
		}
	}

	for(int j=0; j<4; j++){
		printf("\n%d��° ������ ��������� %2.lf�� �Դϴ�.\n", (j + 1), score_avg[j] / 3.0);
	}

	return 0;
}
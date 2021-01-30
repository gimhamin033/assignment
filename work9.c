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

	printf("학생 수를 입력하세요==>");
	scanf("%d", &num);

	while (i < num) {
		printf("\n==============================\n");
		printf("학생의 이름을 입력하세요.\n");
		scanf("%s", name[i]);
		printf("\n학생의 국어 영어 수학 점수를 엔터를 이용하여 입력하세요.\n");
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
		printf("%s 학생의 평균은 %.2f 점입니다. \n", name[i], avg[i]);
	}
	return 0;
}
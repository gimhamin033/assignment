#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[3][4];
	double score_avg[4] = { '\n'};

	printf("성적 관리 시스템입니다. \n\n");

	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생의 4개과목(국어, 영어, 수학, 과학)점수를 입력하세요.\n", (i + 1));

		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			score_avg[j] += score[i][j];
		}
	}

	for(int j=0; j<4; j++){
		printf("\n%d번째 과목의 평균점수는 %2.lf점 입니다.\n", (j + 1), score_avg[j] / 3.0);
	}

	return 0;
}
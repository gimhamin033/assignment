#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	char name[20] = {"Hong Gil Dong"};
	int stu_id = 2012111;
	int lang_score = 90;
	int math_score = 80;
	float average = (lang_score + math_score) / 2;

	FILE* fp = NULL;
	fp = fopen("Student.txt", "w");
	if (fp == NULL) {
		printf("FILE OPEN ERROR");
		exit(0);
	}

	fprintf(fp, "%s\n%d\n%d\n%d\n%.2lf\n", name, stu_id, lang_score, math_score, average);
	fclose(fp);
	printf("�̸�: %s\n�й�: %d\n����: %d\n���� :%d\n \n���: %.2lf\n", name, stu_id, lang_score, math_score, average);


	system("pause");
	return 0;

}
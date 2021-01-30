#define INPUT "입력하세요====>"
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char name[100];
	int num;
	float left;
	float right;
	char blood;

	printf("<프로필 관리 프로그램> \n");
	printf("이름을 %s ", INPUT);
	scanf("%s", name);
	printf("학번을 %s ", INPUT);
	scanf_s("%d", &num);
	printf("오른쪽 시력을 %s ", INPUT);
	scanf_s("%f", &left);
	printf("왼쪽 시력을 %s ", INPUT);
	scanf_s("%f", &right);
	printf("혈액형을 %s ", INPUT);
	scanf("%c", &blood);
	getchar();

	printf("\n===== 프로필 ======\n");
	printf("이름 : %s \n", name);
	printf("학번 : %d \n", num);
	printf("오른쪽 시력 : %.1f \n", right);
	printf("왼쪽 시력 : %.1f \n", left);
	printf("혈액형 : %c", blood);
	getchar();
	printf("===================\n");


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Department {
	char depart_name[20];
	int num_stu;
	int num_sb;
}swu;

int main() {

	char *dept = swu.depart_name;
	int *admin = &swu.num_stu;
	int *prof_admin = &swu.num_sb;

	printf("입력부서 <학과> : 학과 이름을 입력하세요.==> ");
	scanf("%s", dept);
	printf("입력부서 <총무과> : 학생 수를 입력하세요 ==> ");
	scanf("%d", admin);
	printf("입력부서 <교무과> : 과목 수를 입력하세요 ==> ");
	scanf("%d", prof_admin);

	printf("===================\n");
	printf("학과명 : %s \n", swu.depart_name);
	printf("학생수 : %d \n", swu.num_stu);
	printf("과목수 : %d \n", swu.num_sb);

	system("pause");
	return 0;

}
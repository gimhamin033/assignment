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

	printf("�Էºμ� <�а�> : �а� �̸��� �Է��ϼ���.==> ");
	scanf("%s", dept);
	printf("�Էºμ� <�ѹ���> : �л� ���� �Է��ϼ��� ==> ");
	scanf("%d", admin);
	printf("�Էºμ� <������> : ���� ���� �Է��ϼ��� ==> ");
	scanf("%d", prof_admin);

	printf("===================\n");
	printf("�а��� : %s \n", swu.depart_name);
	printf("�л��� : %d \n", swu.num_stu);
	printf("����� : %d \n", swu.num_sb);

	system("pause");
	return 0;

}
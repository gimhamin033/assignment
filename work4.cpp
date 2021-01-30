#include <stdio.h>
#pragma warning(disable:4996)
#define M1 "1. 별이 빛나는 밤\n"
#define M2 "2. 건축학 개론\n"
#define M3 "3. 타이타닉(3D)\n"
#define M4 "4. 코난-암흑의시대\n"

int main(void) {
	int age, num;
	char name[20];

	printf("슈먼 시네마에 오신것을 환영합니다.\n\n");
	printf("예약자의 이름 및 나이를 공백문자로 구분하여 입력하세요. ==>");
	scanf("%s %d", name, &age);

	printf("홍길동 님이 예매 가능한 영화입니다.\n\n");
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
printf("원하는 영화 번호를 입력하세요. ==>");
scanf("%d", &num);

if (age >= 18) {
	if (num >= 4) {
		printf("잘못 누르셨습니다.");
	}
}
else if (age >= 12 && age < 15) {
	if (num >= 3) {
		printf("잘못 누르셨습니다.");
	}
}
else if (age < 12) {
	if (num >= 2) {
		printf("잘못 누르셨습니다.");
	}

	printf("예매가 진행됩니다.\n");

	return 0;

}
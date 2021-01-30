#include <stdio.h>

void one(int x) {
	puts("<현재 주문 총 금액 : 16000원>\n");
}
void two(int x) {
	puts("<현재 주문 총 금액 : 18000원>\n");
}
void three(int x) {
	puts("<현재 주문 총 금액: 20000원>\n");
}
void four(int x) {
	puts("<현재 주문 총 금액: 22000원>\n");
}
void one1(int x) {
	puts("<현재 주문 총 금액 : 19000원>\n");
}
void one2(int x) {
	puts("<현재 주문 총 금액 : 20000원>\n");
}
void one3(int x) {
	puts("<현재 주문 총 금액: 22000원>\n");
}
void two1(int x) {
	puts("<현재 주문 총 금액: 21000원>\n");
}
void two2(int x) {
	puts("<현재 주문 총 금액 : 22000원>\n");
}
void two3(int x) {
	puts("<현재 주문 총 금액: 24000원>\n");
}
void three1(int x) {
	puts("<현재 주문 총 금액: 25000원>\n");
}
void three2(int x) {
	puts("<현재 주문 총 금액 : 26000원>\n");
}
void three3(int x) {
	puts("<현재 주문 총 금액 : 28000원>\n");
}
int main(void) {

	int number;
	puts("슈먼 레스토랑에 오신것을 환영합니다!! \n");
	puts("======= Main Menu =======");
	puts("1. 봉골레 파스타 : 16000원");
	puts("2. 빠네 파스타 : 18000원");
	puts("3. 포테이토 피자: 20000원");
	puts("4. 고르곤졸라 피자: 22000원");
	puts("========================= \n");

	printf("메인 메뉴를 선택하세요 : ");
	scanf_s("%d", &number);
	switch (number)
	{
	case 1:
		one(number);
		break;
	case 2:
		two(number);
		break;
	case 3:
		three(number);
		break;
	case 4:
		four(number);
		break;
	default:
		printf("잘못 누르셨습니다, \n");
	}

	int num;
	puts("======= Drink Menu ======= \n");
	puts("1. 소다 : 3000원 \n");
	puts("2. 에이드 : 4000원 \n");
	puts("3. 생과일 주스 : 6000원 \n");
	puts("========================== \n");

	printf("음료를 선택하세요 : ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		one1(num);
		break;
	case 2:
		one2(num);
		break;
	case 3:
		one3(num);
		break;
	case 4:
		two1(num);
		break;
	case 5:
		two2(num);
		break;
	case 6:
		two3(num);
		break;
	case 7:
		three1(num);
		break;
	case 8:
		three2(num);
		break;
	case 9:
		three3(num);
		break;
	default:
		printf("잘못 누르셨습니다, \n");
	}
	printf("주문이 완료되었습니다.\n");

	return 0;
}
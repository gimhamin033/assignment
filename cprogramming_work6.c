#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int menu = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int price = 0;


	printf("어서오세요. 슈먼 레스토랑 예약 프로그램입니다.\n");
	printf("요리별 인원 선택이 가능합니다.\n \n");

	do {
		printf("======================\n");
		printf("1. A코스: 30000원\n");
		printf("2. B코스: 20000원\n");
		printf("3. C코스: 10000원\n");
		printf("4. 예약 종료\n");
		printf("======================\n \n");

		printf("메뉴를 선택해주세요. ==> ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("선택한 요리를 예약할 인원을 입력해주세요. ==> ");
			scanf("%d", &num1);
			break;
		case 2:
			printf("선택한 요리를 예약할 인원을 입력해주세요. ==> ");
			scanf("%d", &num2);
			break;
		case 3:
			printf("선택한 요리를 예약할 인원을 입력해주세요. ==> ");
			scanf("%d", &num3);
			if (num1 + num2 + num3 > 10) {
				printf("\n최대 예약 인원 10명을 초과하게 되어서 예약을 진행할 수 없습니다.\n");
				printf("예약 가능한 인원은 %d명입니다. 다시 선택해주세요.\n", num1 + num2 + num3 - 10);
			}
			break;
		case 4:
			printf("주문이 종료되었습니다.\n \n");
			printf("A코스: %d명, B코스: %d명, C코스: %d명 \n", num1, num2, num3);
			printf("총 금액은 %d원 입니다.\n \n", num1 * 30000 + num2 * 20000 + num3 * 10000);
			break;
		default:
			printf("잘못 누르셨습니다. 다시 선택해주세요.\n");
		}
	} while (menu != 4);

	return 0;
}

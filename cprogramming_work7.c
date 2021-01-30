#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int movie = 0;
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int price = 0;

	printf("슈먼 시네마에 오신 것을 환영합니다.\n");

	do {
		printf("================\n");
		printf("1. 별이 빛나는 밤\n");
		printf("2. 건축학 개론\n");
		printf("3. 타이타닉<3D>\n");
		printf("4. 코난-암흑의시대\n");
		printf("================\n");

		printf("\n예매할 영화 번호를 입력하세요.<예매 종료 :0번> ==> ");
		scanf("%d", &movie);

		switch (movie) {
		case 0:
			printf("\n예매를 종료합니다.\n");
			printf("1. 별이 빛나는 밤 \n : %d장 \n", num1);
			printf("2. 건축학 개론 \n : %d장 \n", num2);
			printf("3. 타이타닉<3D> \n : %d장 \n", num3);
			printf("4. 코난-암흑의시대 \n : %d장 \n", num4);
			printf("\n총 결제 금액은 %d원 입니다.\n", 10000*(num1+num2+num3));
			break;
		case 1:
			printf("예매할 영화 매수를 입력하세요.==> ");
			scanf("%d", &num1);
			break;
		case 2:
			printf("예매할 영화 매수를 입력하세요.==> ");
			scanf("%d", &num2);
			break;
		case 3:
			printf("예매할 영화 매수를 입력하세요.==> ");
			scanf("%d", &num3);
			if (num1 + num2 + num3 > 10) {
				printf("\n최대 예매 수량 10장을 초과하게 됩니다.\n");
				printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n", 10 - num1 - num2);
			}
			break;
		case 4:
			printf("예매할 영화 매수를 입력하세요.==> ");
			scanf("%d", &num4);
			break;
		default:
			printf("잘못 누르셨습니다.\n");
			break;
		}
		/*if (howmany1 + howmany2 + howmany3 + howmany4 > 10) {
			printf("최대 예매 수량 10장을 초과하게 됩니다.\n");
			printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n", howmany1 + howmany2 + howmany3 + howmany4 - 10);
		}*/
	} while (movie != 0);

	return 0;

}
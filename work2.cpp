#define NUL "넓이는"
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int line, height, radius;
	float sam, circle;

	printf("삼각형 밑변 및 높이를 공백을 사용하여 입력하세요==>");
	scanf("%d %d", &line, &height);
	sam = (float)line * height / 2;
	printf("삼각형의 %s %.2f입니다. \n", NUL, sam);

	printf("원의 반지름을 입력하세요==>");
	scanf("%d", &radius);
	circle = (float)3.14 * radius * radius;
	printf("원의 %s %.2f입니다. \n",NUL, circle);

	return 0;
}
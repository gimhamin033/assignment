#include <stdio.h>
#include <string.h>

int main() {

	char coffee[20];
	char state[10];
	char take[20];

	FILE *fp = NULL;
	fp = fopen("coffee.txt", "w");

	if ((fp == NULL))
		printf("fail to open file \n");
	else
		printf("success to open file \n");

	fclose(fp);

	printf("Welcome to visit our cafe! \n");
	printf("Menu: \n");

	printf("1. Americano \n");
	printf("2. Cafe Latte \n");
	printf("3. Cappuccino \n");
	printf("4. Caffe Mocha \n");
	printf("5. Caramel Macchiato \n");
	printf("6. Vanilla Latte \n");

	printf("Please enter the coffee \n");
	gets_s(coffee, 19);

	if (strcmp(coffee, "Americano") == 0 || strcmp(coffee, "Cafe Latte") == 0 || strcmp(coffee, "Cappuccino") == 0 ||
	strcmp(coffee, "Cafe Mocha") == 0 || strcmp(coffee, "Vanilla Latte") == 0) {
		printf("Do you eat cold or hot? \n");
		scanf("%s", state);
		printf("Are you going to takeout your coffee? \n");
		scanf("%s", take);

		printf("Order: |---%s---|---%s---|---%s---| \n", coffee, state, take);
	}
	return 0;
}





				





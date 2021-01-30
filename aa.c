#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp1;  
	FILE *fp2; 
//	FILE *fp3;

	int n1 = 0, n2 = 0; 
	int result = 0;

	fp1 = fopen("1.txt", "r");
	if (fp1 == NULL)
	{
		printf("1.txt File Open Error!!\n");
		return 1;
	}
	fp2 = fopen("2.txt", "r");
	if (fp2 == NULL)
	{
		printf("2.txt File Open Error!!\n");
		return 1;
	}

	fscanf(fp1, "%d", &n1);
	fclose(fp1);
	fscanf(fp2, "%d",&n2);
	fclose(fp2);

	result = n1 * n2; 

	printf("%d\n", result);
	return 0;
}


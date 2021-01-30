#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int check(char s[], char a[], char ch);
int main(void)
{
char solution[10][100] = { "meet at midnight", "thanks god it is friday",
"close the door", "enemy at the gate",
"superman returns", "phantom of the opera"
"sex and the city", "lord of the rings", "forth of july" };
char answer[10][100] = { "____ __ ________", "______ ___ __ __ ______",
"_____ ___ ____", "_____ __ ___ ____",
"________ _______", "_______ __ ___ _____",
"___ ___ ___ ____", "____ __ ___ _____", "_____ __ ____" };
char ch;
int a; // 10개의 문장

srand((int)time(NULL)); // 난수 발생전 시드값 설정

a = rand() % 10;

printf("\n %d \n", a); //10개의 문장 중 인덱스 몇 번째 문장을 정답으로 하는지

while (1)
{
printf("문자열을 입력하시오: %s \n ", answer[a]);
printf("글자를 추측하시오:  ");
ch = getchar();

if (check(solution[a], answer[a], ch) == 1)
break;

fflush(stdin); // 줄바꿈 문자 제거
}

return 0;
}



int check(char s[], char a[], char ch)
{
int i;

for (i = 0; s[i] != NULL; i++)
{
if (s[i] == ch)
a[i] = ch;
}

if (strcmp(s, a) == 0)
return 1;
else
return 0;

}

#include <stdio.h>
#include <stdlib.h>
int main() {
 int val1, val2;
 int i, j;
 int change[32], bin[32]; // 32비트로 받아오는 바이너리 배열
 int fir, sec, thir, four; // 8진수,16진수 나타낼 때 자릿수 의미
 int a=0, b=0; // 8진수에서 3으로 나눠 떨어지지 않는 자릿수

 printf("32비트 범위 정수 입력 : ");
 scanf("%d", &val1); // 10진수 정수 입력
 if (val1 >= 0) { // 양의 정수 입력
 for (i = 0; i < 32; i++) {
 val2 = val1 % 2; //입력 받은 10진수를 2로 나누어 2진수로 변환
 val1 = val1 / 2;
 change[i] = val2;
 bin[31 - i] = change[i]; //값이 반대로 입력되어 값을 반대로 뒤집어줌
 }

 // 2진수로 출력
 printf("2진수 : ");
 for (i = 0; i < 32; i++) {
 if (i % 4 == 0 && i != 0) { // 4자리씩 끊기
 printf(" ");
 }
 printf("%d", bin[i]); // 바이너리 배열 출력
 }
 printf(" \n");
 printf("8진수 : ");
 // 8진수로 출력
 for (i = 2; i < 32; i += 3) { // 3으로 나눠 떨어지지 않는 자릿수를 제외하고 i=2부터 시작
 a = bin[0] * 2;
 b = bin[1] * 1;
 fir = bin[i] * 4; // 바이너리를 3씩 끊은것 중 맨 앞자리 값에 곱하기 4
 sec = bin[i + 1] * 2; // 바이너리를 3씩 끊은것 중 가운데 값에 곱하기 2
 thir = bin[i + 2] * 1; // 바이너리를 3씩 끊은것 중 마지막 값에 곱하기 1
 printf("%d", fir + sec + thir);
 }
 printf(" \n");
 printf("16진수 : ");

 // 16진수로 출력
 for (i = 0; i < 32; i += 4) { // 16진수는 바이너리를 4씩 묶으므로 i는 4씩 증가
 fir = bin[i] * 8; // 바이너리를 4씩 끊은것 중 맨 앞자리 값에 곱하기 8
 sec = bin[i + 1] * 4; // 바이너리를 4씩 끊은것 중 두번째 자리값에 곱하기 4
 thir = bin[i + 2] * 2; // 바이너리를 4씩 끊은 것 중 세번째 자리값에 곱하기 2
 four = bin[i + 3] * 1; // 바이너리를 4씩 끊은 것 중 마지막 자리값에 곱하기 1
 int sum = fir + sec + thir + four; // 4씩 끊은 것 중에서 계산한 4개 값 더하기
 if (sum < 10) printf("%d", sum); // 10보다 작은 경우, 본래 수 출력
 else if (sum == 10) printf("A"); // sum이 10이면 A 출력
 else if (sum == 11) printf("B"); // sum이 11이면 B 출력
 else if (sum == 12) printf("C"); // sum이 12이면 C 출력
 else if (sum == 13) printf("D"); // sum이 13이면 D 출력
 else if (sum == 14) printf("E"); // sum이 14이면 E 출력
 else if (sum == 15) printf("F"); // sum이 15이면 F 출력
 }
}
 else if (val1 < 0) { // 음의 정수 입력
 for (i = 0; i < 32; i++) {
 val2 = val1 % 2;
 val1 = val1 / 2;
 change[i] = val2;
 bin[31 - i] = !change[i]; // 1의 보수 계산
 } // 1 더하는 과정 중, 이는 10진수로 표현이 되므로 이러한 과정을 거침
 for (j = 0; j < 32; j++) {
 if (bin[31 - j] == 0) { // 끝자리가 0이면 1을 더해주고 for문 나가기
 bin[31 - j] += 1;
 j = 33;
 }
 else if (bin[31 - j] == 1) { // 끝자리가 1이면 0으로 바꾸기
 bin[31 - j] = 0;
 }
 }
 // 값 출력
 printf("2진수 : ");
 for (i = 0; i < 32; i++) {
 if (i % 4 == 0 && i != 0) { // 4자리씩 띄어서 끊기
 printf(" ");
 }
 printf("%d", bin[i]);
 }
 printf(" \n");
 printf("8진수 : ");
 // 8진수 출력
 for (i = 2; i < 32; i += 3) {
 fir = bin[i] * 4; //바이너리를 3씩 끊은 것 중 맨 앞자리 값에 4를 곱함
 sec = bin[i + 1] * 2; //바이너리를 3씩 끊은 것 중 가운데 값에 2를 곱함
 thir = bin[i + 2] * 1; //바이너리를 3씩 끊은 것 중 마지막 값에 1을 곱함
 printf("%d", a + b + fir + sec + thir);
 }
 printf(" \n");
 printf("16진수 : ");
 // 16진수 출력
 for (i = 0; i < 32; i += 4) {
 fir = bin[i] * 8; //바이너리를 4씩 끊은것 중 맨 앞자리 값에 곱하기 8
 sec = bin[i + 1] * 4; // 바이너리를 4씩 끊은것 중 두번째 자리값에 곱하기 4
 thir = bin[i + 2] * 2; // 바이너리를 4씩 끊은것 중 세번째 자리값에 곱하기 2
 four = bin[i + 3] * 1; // 바이너리를 4씩 끊은것 중 마지막 자리값에 곱하기 1
 int sum = fir + sec + thir + four; //4씩 끊은 것 안에서 계산한 4개 값을 더함
 if (sum < 10) printf("%d", sum); // 16진수는 바이너리를 4씩 묶어서 i는 4씩 증가
 else if (sum == 10) printf("A"); // sum이 10이면 A 출력
 else if (sum == 11) printf("B"); // sum이 11이면 B 출력
 else if (sum == 12) printf("C"); // sum이 12이면 C 출력
 else if (sum == 13) printf("D"); // sum이 13이면 D 출력
 else if (sum == 14) printf("E"); // sum이 14이면 E 출력
 else if (sum == 15) printf("F"); // sum이 15이면 F 출력
 }
}
return 0;
}

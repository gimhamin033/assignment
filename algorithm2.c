// C로 구현
#include <stdio.h>
int main() {
int array[100][100]={0,};
int i=0; int j=0; intk=1; int n=1; int m=1;
// 행 i
// 열 j
// 증감 1 또는 -1
// 출력되는 숫자
// 절반 넘었는지 검사용
for(; n <= (5*5); ++m, k = k*(-1)){
for(; i>=0 && j>=0 && i<5 && j<5; i=i+k, j=j-k, ++n){
array[i][j] = n; }
if(k == 1){
if( m>=5){
i=i-1; j=j+2;
} else{
//k가1인경우 //m이5보다크거나같은경우 //한행감소시킨위치에서출력 //두열증가시킨위치에서출력
//m이5보다작은경우 //한열증가시킨위치에서출력
j=j+1;
else{ // k가 -1인 경우
} }
if(m>=5){ i=i+2;
j=j-1;
} else{
i=i+1;
}
for( i=0; i<5; ++i ){
//m이 5보다 크거나 같은 경우 //두행증가시킨위치에서출력 //한열감소시킨위치에서출력
//m이5보다작은경우 //한행증가시킨위치에서출력
} }
//행이5보다작아질때까지반복
for( j=0; j<5; ++j){ // 열이 5보다 작아질 때까지 반복
printf(" %3d", array[i][j]); }
putchar('\n'); }
return 0; }

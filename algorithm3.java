// Java로 구현
public class Array{
public static void main(String[] args){
int A[][] = new int [6][6]; // 1~5 사용
int K=26; intN=5;
int SW=1; int I=0, J=1;
// 처리 부분 do{
// 출력할 값을 담은 변수 K
// 각 회전에서 수행될 수행 횟수가 지정된 변수 N // 1이면 행과 열의 증가, -1이면 행과 열의 감소
for(int P=1; P<=N; P++){ // 시작은 1~5 K=K-1; // 26이었던 K가 1씩 줄어든다. I=I+SW; // 행 변화 열 고정 A[I][J] = K;
} N=N-1;
if(N>0){
for(int P=1; P<=N; P++){
K=K-1; J=J+SW; A[I][J]=K;
}
// 26이었던 K가 1씩 줄어든다. // 열 변화 행 고정
// 스위칭 해주는 부분
SW = SW*(-1); }else{
break; // 반복문을 빠져나간다. }
}while(true);
// 출력 부분
for(int i=1; i<A.length; i++){
for(int j=1; j<A[i].length; j++){ System.out.print(A[i][ j]+"\t");
}
System.out.println();
}
}
}

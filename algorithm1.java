// Java로 구현
public class Array{
 public static void main(String[] args){
 int [][] A = new int[5][5]; // 5*5 배열
 int k=0; // 1씩 증가하는 k

// 처리 부분
 for(int SPIN=0; SPIN < 9; SPIN++){ // 0~8까지 9회전
START
k = 0
A(5,5)
반복 SPIN = 0, 8, 1
i = SPIN - j
반복 j = 0, 4, 1
A(j, i) = k
k = k + 1
END
 for(int j=0; j < 5; j++){ // 배열의 열 위치를 지정하는 변수 j
 int i = SPIN - j; // 배열의 행 위치를 지정하는 변수 i
 if(i >= 0 && i < 5){ // i가 0보다 크거나 같고 5보다 작은 경우
 k = k+1; // k는 1씩 증가
 A[j][i]=k;
 }
 }
 }

// 출력 부분
 for(int i=0; i<5; i++){
 for(int j=0; j<5; j++){
 System.out.print(A[j][i]+"\t");
 }
 System.out.println();
 }
 }
}

#include <stdio.h>
//삼항연산자 : if~else를 간결하게 표현, 대신 복잡한 연산은 불가능
// 조건 ? A : B =>조건이 참이면 A 아니면 B // ?와 :는 바꾸기 불가능
int main(void)
{
	//int a = 10, b = 20;
	//int max;
	//max = a > b ? a : b;
	//printf("%d",max);   
	

	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("짝수") : printf("홀수");
	// 조건 ? 참일때 : 거짓일 때  
	// % 나머지 
	//삼향연산자
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
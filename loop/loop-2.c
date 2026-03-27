//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int i,j; //2개의 정수
//	printf("원하는 단을 입력하세요: ");
//	scanf("%d", &i);//10 입력 // %d는 정수를 다루는 서식 지정자, 정수기에 &(and)가 필요함 
//	printf("< %d단 >\n", i); 
//	for (j = 1; j <= 9;j++) // j에 1대입 그리고 j는 9까지 j를 먼저 출력하고 더한다.
//	{
//		printf("%d * %d = %d\n", i, j, i * j); 
//
//	}
//	return 0; 
//}
#include <stdio.h>
int main(void)
{
	//int i, j;

	for (int i = 2; i <= 9; i++) { //i는 단 2~9
		//i는 i가 다 반복이 끝나면(9번) 그때 i가 하나 증가
		printf(" <%d 단 >\n", i);
		for (int j = 1; j <= 9;j++)//곱하는 1~9 반복
		{
			printf("%d * %d = %-3d\n", i, j, i * j); // 3d는 3자리 수 
			//원래는 오른쪽 정렬, -를 붙이면 왼쪽 정렬

		} // i for 끝
	} // i for 끝
} // main 끝

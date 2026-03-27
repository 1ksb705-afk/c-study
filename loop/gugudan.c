#include <stdio.h>
int main(void)
{
	int i, j; //중복 for: 밖의 for가 1번 - 안쪽 for 전부 반복

	for ( i = 1; i <= 12; i=i+3) { //i는 단 (곱해지는 수) 
		//1줄에 3단이 출력되므로 다음줄에는 4단이 시작한다.
		//i는 i+3으로 증가
		printf(" %d단\t	 %d단\t        %d단\n", i,i+1,i+2);
		//제목 3단씩 출력, \t는 탭으로 간격맞춤 예) i가 1단 i+1단이 2단 i+2단이 3단
		for ( j = 1; j <= 9;j++) //j는  곱하는 수
		{
			printf("%d * %d = %2d\t", i, j, i * j); //1 * 1= 1 
			printf("%d * %d = %2d\t", i+1, j,( i+1) * j);//2 * 1= 2 
			printf("%d * %d = %2d\n", i+2, j, (i+2 )* j);//3 * 1= 3 
		} 
	} 
} 

//printf(" \n"); //밖에 for 문장이므로 1~12단의 3단씩 줄바꿈
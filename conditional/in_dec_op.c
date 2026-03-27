//증가 감소 연산자
//++a 예)printf("%d", ++a)
//a++ 예)printf("%d", a++)
//--a 예)printf("%d", --a)
//a-- 예)printf("%d", a--)
#include <stdio.h>
int main(void)
{
	int a = 10;
	printf("%d\n", a++); //후위 증가 //10
	printf("%d\n", ++a); //전위 증가 //12
	printf("%d\n", a--); //후위 감소 //12
	printf("%d\n", --a); //전위 감소 //10
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL; // 포인터변수 선언

	p = &i; //i변수의 주소를  p포인터 변수에 줌

	printf("&i = %p\n\n", &i);
	//%p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
	//주소에 저장된 내용에 접근하는 포인터
	i = 4000;
	printf("i = %d\n", i);
	*p = 5000;
	printf("*p = %d\n", *p);
	//---------------------------------------------------------
	int x = 10, y = 20;
	int* pi; //포인터 함수

	pi = &x; //x의 주소를 포인터 변수 pi에 준다
	printf("pi = %p\n", pi); // pi가 가르키는 x의 주소를 x에 출력한다. //10
	printf("*pi = %p\n", *pi);

	pi = &y;
	printf("pi = %p\n", pi); //y의 주소를 포인터 변수 pi에 준다
	printf("*pi = %p\n", *pi); //pi가 가르키는 y의 주소를 y에 출력한다. //20

	return 0;
}
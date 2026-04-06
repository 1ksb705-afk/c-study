#define _SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i; //i의 주소를 pointer변수인 pi에 준다, pi는 i의 주소를 가르킴

	printf("i = %d, pi = %p\n", i, pi); // %p는 주소 지정자
	//메모리 주소는 2진수(16진수로 보여줌)

	(*pi)++; //pi가 가리키는 위치의 값을 증가한다.
	// ()먼저  *pi는 가르키는 주소의 값 => ++ : 값을 1증가,주소는 그대로
	printf("*i = %d, pi = %p\n", i, pi);  //11

	*pi++; //pi가 가리키는 위치에서 값을 가져온 후에 포인터 pi를 증가한다.
	//*pi -> i를 가르키는데 그 값(* 있으므로)-> 11 -> ++는 주소를 증가 (위치가 바뀜)
	printf("*i = %d, pi = %p\n", i, pi); //11 
	return 0;
}
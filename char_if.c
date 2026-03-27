#include <stdio.h>
//문제) 1글자를 받아 대,소문자,숫자로 분류
int main()
{
	char ch; //문자 1글자 변수
	printf("문자를 입력하세요:");
	//scanf("%c", &ch);
	ch = getchar();//1글자
	if (ch >= 'A' && ch <= 'Z')
		printf("대문자입니다.");
	else if (ch >= 'a' && ch <= 'z')
		printf("소문자입니다.");
	else if (ch >= '0' && ch <= '9')
		printf("숫자입니다");
	else
		printf("그외 문자입니다.");









	return 0;
}
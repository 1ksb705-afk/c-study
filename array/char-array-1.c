//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	char str[30] = "C language"; //문자배열 30자
//	int i = 0;
//
//	while (str[i] != '\0') //만족할때 반복 // != 다르다
//							//문자열 내용 끝나는시점에 반드시 null이 들어감
//		i++;
//
//	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	char menu[5][10] = { //5행 10열(0~4행 0~9열)
	"init", //1행씩 초기값 설정
	"open",
	"close",
	"read",
	"write"
	};

	for (a = 0; a < 5; a++) //0~4
		printf("%d 번째 메뉴: %s \n", a, menu[a]);
	return 0;
}
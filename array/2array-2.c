#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	char menu[3][10] = { //5행 10열(0~4행 0~9열)
	"init", //1행씩 초기값 설정
	"open",
	"close",
	"read",
	"write"
	};

	for (a = 0; a < 3; a++) //0~4
		printf("%d 번째 메뉴: %s \n", a, menu[a]);
	return 0;
}
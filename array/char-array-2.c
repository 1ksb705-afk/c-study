#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	char fruits[3][20];

	for (a = 0; a < 3; a++) //0~2
	{
		printf("과일 이름을 입력하세요: ");
		scanf("%s", fruits[a]);
		printf("%d 번째 과일은 : %s \n", a, fruits[a]);
	}

	return 0;
}
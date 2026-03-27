#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, s;
	int sum;
	float a;
	printf("3명의 점수를 입력하시오");
		scanf("%d %d %d", &i, &j, &s);
		sum = i + j + s;
		a = sum / 3;
		printf("합계는 %d ,평균은 %f", sum,a);
	return 0;
}
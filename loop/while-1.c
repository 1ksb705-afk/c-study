//1~5 출력

//#include <stdio.h>
//int main()
//{
//	int i = 1; // 초기값 1
//
//	while (i <= 5) //i<6 i가 1~5,i가 6일 때
//	{
//		printf("%d\n", i);
//		i = i + 1; // i+=1 //i++;
//	}
//
//
//
//
//
//
//	return 0;
//}

//1~100 합 출력
//#include <stdio.h>
//int main()
//{
//	int i = 2; //1~100 변수
//	int sum = 0; // 합계 누적할 변수
//	 
//	while (i <= 100) 
//	{
//		//printf("%d\n", i);
//		sum = sum + i; 
//		i = i + 2; // i+=1 //i++;  //101
//	}
//	printf("1-100 짝수 합은:%d", sum);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, i = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num); //5입력
	while (i < num) //{5탈출}
		printf("handman!\n");
	i++; // 1씩 증가





	return 0;

}
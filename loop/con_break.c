#include <stdio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 10; i++) //7의 배수가 인지 확인 필요
	{
		if (i % 7 == 0)
			//break;
			continue; //아래문장으로 내려가지 않고 다시 반복문의 조건으로 올라가서 물어보고 반복
			printf("%d \n", i);  //7의 배수를 만나면 반복문 강제 탈출
	
	}
	return 0;
} 

 
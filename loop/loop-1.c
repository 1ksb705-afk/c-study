#include <stdio.h> 

int main(void)
{
    //int i;
    //int sum = 0; 
    //
    //for (i = 1; i<=10 ;i=i+2)//초기값;조건;증감값
    //{
    //   sum = sum + i; // sum+=i;

    //}
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i = i + 2;
    }
    printf("i는 %d ,  합은 %d\n", i, sum);

    return 0;

}


//#include <stdio.h>
//int main() {
//	int a;
//	a = sizeof(int) + sizeof(char); //int형은 4byte, char형은 1byte
//	printf("%d", a);
//	return 0;
//}

#include <stdio.h>
int main(void) {
	//int a = 200;
	//float b = 123.567f;
	//a = (int)b;
	//printf("%d, %3.2f", a, b); // float형을 int형으로 변환하면 정수가 되면스 소수점은 반올림 없이 절삭된다.
	//return 0;
	//}

	float t;
	t = 10 / 3;
	printf("%f", t);
	t = (float)10 / 3;
	printf("%f", t);
}
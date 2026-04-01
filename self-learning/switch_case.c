#include <stdio.h>
int main() {
	int a = 4; //a에 4라는 정수 대입
	switch (a) { // switch는 하나의 변수만 가지고 검사한다.
	case 5: //a가 5인 경우 시행
		printf("A"); // A출력
	case 3: //a가 5가 아닌 3인 경우 시행
		printf("B"); //B출력
	case 1: //a가 5가 아니고 3이 아닌 1인 경우라면 시행
		printf("C"); //C출력
	default: //a가 5,3,1에 해당되지 않는 나머지인 경우 시행
		printf("D"); //D출력
	}
	return 0; //정상 종료
}
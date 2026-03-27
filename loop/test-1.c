//#include<stdio.h>
//int main() {
//	int i, cnt = 0;
//	for (i = 1;i <= 100;i++) {
//		if (i % 3 == 0 && i % 7 == 0) { // i를 3으로 나눈 나머지의 값이 0 그리고 7로 나눈 나머지의 값이 0이라면 아래에 있는 문장 실행 
//			printf("%d*", i);  
//		}
//
//
//
//	}
//}
//


#include<stdio.h>
int main() {
	int i;
	for (i = 0;i < 10;i++) { 
		if (i % 3 == 0) continue; //i를 3으로 나눈 나머지가 0이라도 continue 형식 때문에 아래로 내려가지 않고 위로 올라가서 조건을 물어본다.
		if (i > 5) break; // i가 5를 넘어간다면 강제로 내려간다.
		printf("%d ", i);
	}
}
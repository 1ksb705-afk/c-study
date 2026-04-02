#include <stdio.h>
int digit(int n) { //digit라는 함수를 선언
	if (n < 10) return n; //만약 n이 10보다 작다면 10을 돌려보낸다. 
	return (n % 10) + digit(n / 10); //n이 10 이상일 때 맨 끝자리와 나머지 앞 부분을 합한다.
	//(235%10) + digit(235/10)
	//5+ digit(23)
	//(23%10) + digit(23/10)
	//   3+digit(2)
	
}




int main() { //제일 먼저 시작되는 부분
	printf("%d", digit(235)); //235를 시행하여 결과 %d를 출력(10)
}
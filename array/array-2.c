//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define	STUDENTS 5	//기호상수 5->STUDENTS
//
//
//
//int main(void)
//{
//	int score[STUDENTS]; //5개
//	int sum = 0; //누적 변수는 0으로 초기화
//	float avg;
//	for (int i = 0; i <= 4; i++){
//		printf("학생들의 성적을 입력하시오: ");
//		scanf("%d", &score[i]);
//	// scores[0]-scores[4]에 들어갈 값 입력
//	// scanf 수행시 배열요소에 &붙임 
//	sum = sum + score[i]; //sum+=score[i];
//}
//
//	avg = sum / 5.; //5. 실수 계산
//	printf("성적 합계=%d 성적 평균=%.2f\n", sum, avg);
//
//	
//
//	
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5 //기호상수
int main() {
    int sum = 0; //누적 변수는 무조건 0으로 초기화
    float avg = 0;
    int cnt = 0;
    int score[STUDENTS]; //5개
    for (int i = 0; i <= 4; i++) {
        printf("학생성적 입력");
        scanf("%d", &score[i]);
        if (score[i] > 100 || score[i] < 0) {
            i = i - 1;
            continue;
        }
        sum = sum + score[i];
        if (score[i] == 0) {
            cnt++;
        }

    }
    avg = (float)sum / (5 - cnt); //5. 실수 계산
    printf("합계: %d, 평균: %f", sum, avg);

    return 0;
}
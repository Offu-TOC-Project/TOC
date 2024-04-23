#include "FoodList.h"
#include <stdio.h>
#include <time.h>

/*
화면3
	식단에 칼로리 출력 & 적정 칼로리 계산
	ex) 사과 1/2 50kcal
	요거트 50g 80kcal
	닭가슴살 100g 100kcal
	-----------------------
	식단 합계 1234 kcal

화면4
	하루 적정 칼로리 :: 1500kcal - 식단합계 =
	1500기준
	이하면 성공
	이상이면 실패

	계산 결과 화면 (캐릭터와 함께)
*/

// 식단 합계 -> FoodRecord.c에서 함수를 불러와서 변수에 저장해야 함
int TotalKcal = 0;
// 하루 적정 칼로리
int dailyCalories = 1500;

int calculate() {
    // 적정 칼로리 계산
    int result = dailyCalories - TotalKcal;

    return result;
}

int printBar() {
    // 현재 시각을 얻기 위해 시간을 저장
    time_t startTime = time(NULL);
    time_t currentTime;
    int elapsedSeconds = 0;

    // 이전에 출력한 '-'의 개수
    int prevCount = 0;

    // 경과된 시간을 측정할 변수
    do {
        currentTime = time(NULL);
        elapsedSeconds = difftime(currentTime, startTime);
        // 경과된 시간이 0.1초 이상이면 '-'를 출력
        if (elapsedSeconds >= 0.1) {
            // 한 번에 추가되는 '-'의 개수를 시간에 비례하도록 설정
            int count = elapsedSeconds * 10; // 1초당 10번의 '-'를 출력
            // '-'의 개수가 이전에 출력한 것과 같다면 출력하지 않음
            if (count != prevCount) {
                printf("---");
                prevCount = count;
            }
        }
    } while (elapsedSeconds < 10); // 10초 동안의 경과된 시간을 측정

    printf("\n"); // 출력을 마무리하기 위해 추가

    return 0;
}

int printResult() {
    int result = calculate();

    // 결과 출력
    printf("결과: ");
    if (result >= 0) {
        printf("성공\n");
        printBar();
        //printf("식단 합계: %d", TotalKcal);
    }
    else {
        printf("실패\n");
        printf("하루 적정 칼로리 :: 1500 - %d = %d\n", TotalKcal, result);
    }
}
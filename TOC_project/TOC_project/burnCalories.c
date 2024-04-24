#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

// 하루 먹은 칼로리만큼 토탈로 계산된 칼로리를 받아오기
int totalKcal = 1230;		// 임시로 지정해놓은 변수

int calculateExerciseTimeHour(int index) {
	int hour = totalKcal / exerciseList[index].burnKcal;
	return hour;
}

int calculateExerciseTimeMinute(int index) {
	int hour = calculateExerciseTimeHour(index);
	int restKcal = totalKcal - hour;
	int caloriesPerMinute = exerciseList[index].burnKcal / exerciseList[index].minute;
	int minute = (restKcal / caloriesPerMinute) % 60;
	return minute;
}

int random() {
	// 0~9 난수 생성
	srand(time(NULL));
	int random = 0;
	random = rand() % 9;
	return random;
}

int printExercise() {
	int randomNum = random();
	int i = 0;

	for (i; i < numExercises; i++) {
		int hour = calculateExerciseTimeHour(i);
		int minute = calculateExerciseTimeMinute(i);
		printf("%s를 %d시간 %d분 이상 하면 칼로리를 태울 수 있습니다.\n", exerciseList[i].sportsName, hour, minute);
	}
	return 0;
}
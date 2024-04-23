#include <stdio.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

int totalKcal = 1230;

int calculateExerciseTime(int index) {
	// 분 단위로 계산됨
	int result = ((totalKcal / exerciseList[index].burnKcal) + 1) * 60;
	return result;
}

int printExercise() {
	int i = 0;
	for (int i = 0; i < numExercises; i++) {
		int time = calculateExerciseTime(i);
		printf("%s를 %d분동안 하면 칼로리를 태울 수 있습니다.\n", exerciseList[i].sportsName, time);
	}
	return 0;
}
#include <stdio.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

int totalKcal = 1230;

int calculateExerciseTimeHour(int index) {
	int hour = totalKcal / exerciseList[index].burnKcal;
	return hour;
}

int calculateExerciseTimeMinute(int index) {
	int hour = totalKcal / exerciseList[index].burnKcal;
	int restKcal = totalKcal - hour;
	int caloriesPerMinute = exerciseList[index].burnKcal / exerciseList[index].minute;
	int minute = (restKcal / caloriesPerMinute) % 60;
	return minute;
}

int printExercise() {
	int i = 0;
	for (int i = 0; i < numExercises; i++) {
		int hour = calculateExerciseTimeHour(i);
		int minute = calculateExerciseTimeMinute(i);
		printf("%s를 %d시간 %d분 이상 하면 칼로리를 태울 수 있습니다.\n", exerciseList[i].sportsName, hour, minute);
	}
	return 0;
}
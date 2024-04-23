#include <stdio.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

int totalKcal = 1230;

int calculateExerciseTime(int index) {
	// �� ������ ����
	int result = ((totalKcal / exerciseList[index].burnKcal) + 1) * 60;
	return result;
}

int printExercise() {
	int i = 0;
	for (int i = 0; i < numExercises; i++) {
		int time = calculateExerciseTime(i);
		printf("%s�� %d�е��� �ϸ� Į�θ��� �¿� �� �ֽ��ϴ�.\n", exerciseList[i].sportsName, time);
	}
	return 0;
}
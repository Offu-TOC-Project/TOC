#include <stdio.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

// �Ϸ� ���� Į�θ���ŭ ��Ż�� ���� Į�θ��� �޾ƿ���
int totalKcal = 1230;		// �ӽ÷� �����س��� ����

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

int random() {

}

int printExercise() {
	int i = 0;
	for (int i = 0; i < numExercises; i++) {
		int hour = calculateExerciseTimeHour(i);
		int minute = calculateExerciseTimeMinute(i);
		printf("%s�� %d�ð� %d�� �̻� �ϸ� Į�θ��� �¿� �� �ֽ��ϴ�.\n", exerciseList[i].sportsName, hour, minute);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

// �Ϸ� ���� Į�θ���ŭ ��Ż�� ���� Į�θ��� �޾ƿ���
int totalKcal = 1230;		// �ӽ÷� �����س��� ����

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
	// 0~9 ���� ����
	srand(time(NULL));
	//srand(clock());		// pc ���۽ð��� �������� �ϱ� ������ ������ �� ������
	int random = 0;
	random = rand() % 9;
	return random + 1;
}

int printExercise() {
	int randomNum = random();
	int randomIndexArr[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int randomIndex;
		do
		{
			randomIndex = random() % numExercises;
		} while (randomIndexArr[0] == randomIndex || randomIndexArr[1] == randomIndex || randomIndexArr[2] == randomIndex);

		randomIndexArr[i] = randomIndex;
	}

	for (int j = 0; j < 3; j++)
	{
		int hour = calculateExerciseTimeHour(randomIndexArr[j]);
		int minute = calculateExerciseTimeMinute(randomIndexArr[j]);
		printf("%s�� %d�ð� %d�� �̻� �ϸ� Į�θ��� �¿� �� �ֽ��ϴ�.\n", exerciseList[randomIndexArr[j]].sportsName, hour, minute);
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

// 하루 먹은 칼로리만큼 토탈로 계산된 칼로리를 받아오기
//int totalKcal = 1230;		// 임시로 지정해놓은 변수

int calculateExerciseTimeHour(int index) {
	int hour = TotalKcal() / exerciseList[index].burnKcal;
	return hour;
}

int calculateExerciseTimeMinute(int index) {
	int hour = calculateExerciseTimeHour(index);
	int restKcal = TotalKcal() - hour;
	int caloriesPerMinute = exerciseList[index].burnKcal / exerciseList[index].minute;
	int minute = (restKcal / caloriesPerMinute) % 60;
	return minute;
}

int random() {
	// 0~9 난수 생성
	srand(time(NULL));
	int random = 0;
	random = rand() % 9;
	return random + 1;
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
				printf("------");
				prevCount = count;
			}
		}
	} while (elapsedSeconds < 10); // 10초 동안의 경과된 시간을 측정

	printf("\n"); // 출력을 마무리하기 위해 추가

	return 0;
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

	printBar();

	for (int j = 0; j < 3; j++)
	{
		int hour = calculateExerciseTimeHour(randomIndexArr[j]);
		int minute = calculateExerciseTimeMinute(randomIndexArr[j]);
		printf("%s를 %d시간 %d분 이상 하면 칼로리를 태울 수 있습니다.\n", exerciseList[randomIndexArr[j]].sportsName, hour, minute);
	}

	return 0;
}
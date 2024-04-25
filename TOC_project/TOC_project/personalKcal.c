#include <stdio.h>
#include <string.h>

char sex[5];
double weight;

void getWeight() {
	printf("몸무게 입력: ");
	scanf("%lf", &weight);
}

void getSex() {
	printf("성별 입력: ");
	scanf("%s", sex);
}

int personalKcal() {
	/*
	체형별 적정 칼로리 출력

	- 체중, 성별 입력받아서 배열에 저장하고 (별도 함수 생성)
	- 남여 구분해서 체중별로 적정 칼로리 계산하는 함수

	기초대사량 계산
	# 남성
		체중 * 24

	# 여성
		체중 * 0.9 * 24

	하루 에너지 필요량 (적정 칼로리)
		기초대사량 * 1.3
	*/

	int personalCalorie = 0;

	if (strcmp(sex, "남") == 0)
	{
		personalCalorie = (weight * 24) * 1.3;
	}
	else
	{
		personalCalorie = (weight * 0.9 * 24) * 1.3;
	}
	return personalCalorie;
}
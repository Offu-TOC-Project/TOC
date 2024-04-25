#include <stdio.h>
#include <string.h>

double getWeight() {
	double weight;
	printf("몸무게 입력: ");
	scanf("%.1lf", &weight);

	return weight;
}

char getSex() {
	char sex;
	printf("성별 입력: ");
	scanf("%c", &sex);

	return sex;
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
	
	double weight = getWeight();
	char sex = getSex();
	int personalCalorie = 0;

	char male = "남";

	if (strcmp(sex, male) == 0)
	{
		personalCalorie = (weight * 24) * 1.3;
	}
	else 
	{
		personalCalorie = (weight * 0.9 * 24) * 1.3;
	}
	return personalCalorie;
}
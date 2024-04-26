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
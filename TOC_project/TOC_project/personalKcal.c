#include <stdio.h>
#include <string.h>

double getWeight() {
	double weight;
	printf("������ �Է�: ");
	scanf("%.1lf", &weight);

	return weight;
}

char getSex() {
	char sex;
	printf("���� �Է�: ");
	scanf("%c", &sex);

	return sex;
}

int personalKcal() {
	/*
	ü���� ���� Į�θ� ��� 
	
	- ü��, ���� �Է¹޾Ƽ� �迭�� �����ϰ� (���� �Լ� ����)
	- ���� �����ؼ� ü�ߺ��� ���� Į�θ� ����ϴ� �Լ�

	���ʴ�緮 ���
	# ����
		ü�� * 24

	# ����
		ü�� * 0.9 * 24

	�Ϸ� ������ �ʿ䷮ (���� Į�θ�)
		���ʴ�緮 * 1.3
	*/
	
	double weight = getWeight();
	char sex = getSex();
	int personalCalorie = 0;

	char male = "��";

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
#include "FoodList.h"
#include <stdio.h>
#include <time.h>

/*
ȭ��3
	�Ĵܿ� Į�θ� ��� & ���� Į�θ� ���
	ex) ��� 1/2 50kcal
	���Ʈ 50g 80kcal
	�߰����� 100g 100kcal
	-----------------------
	�Ĵ� �հ� 1234 kcal

ȭ��4
	�Ϸ� ���� Į�θ� :: 1500kcal - �Ĵ��հ� =
	1500����
	���ϸ� ����
	�̻��̸� ����

	��� ��� ȭ�� (ĳ���Ϳ� �Բ�)
*/

// �Ĵ� �հ� -> FoodRecord.c���� �Լ��� �ҷ��ͼ� ������ �����ؾ� ��
int TotalKcal = 0;
// �Ϸ� ���� Į�θ�
int dailyCalories = 1500;

int calculate() {
    // ���� Į�θ� ���
    int result = dailyCalories - TotalKcal;

    return result;
}

int printBar() {
    // ���� �ð��� ��� ���� �ð��� ����
    time_t startTime = time(NULL);
    time_t currentTime;
    int elapsedSeconds = 0;

    // ������ ����� '-'�� ����
    int prevCount = 0;

    // ����� �ð��� ������ ����
    do {
        currentTime = time(NULL);
        elapsedSeconds = difftime(currentTime, startTime);
        // ����� �ð��� 0.1�� �̻��̸� '-'�� ���
        if (elapsedSeconds >= 0.1) {
            // �� ���� �߰��Ǵ� '-'�� ������ �ð��� ����ϵ��� ����
            int count = elapsedSeconds * 10; // 1�ʴ� 10���� '-'�� ���
            // '-'�� ������ ������ ����� �Ͱ� ���ٸ� ������� ����
            if (count != prevCount) {
                printf("---");
                prevCount = count;
            }
        }
    } while (elapsedSeconds < 10); // 10�� ������ ����� �ð��� ����

    printf("\n"); // ����� �������ϱ� ���� �߰�

    return 0;
}

int printResult() {
    int result = calculate();

    // ��� ���
    printf("���: ");
    if (result >= 0) {
        printf("����\n");
        printBar();
        //printf("�Ĵ� �հ�: %d", TotalKcal);
    }
    else {
        printf("����\n");
        printf("�Ϸ� ���� Į�θ� :: 1500 - %d = %d\n", TotalKcal, result);
    }
}
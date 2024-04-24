#include <stdio.h>
#include <time.h>
#include <Windows.h>

#include "GOTOXY.h""

int Gragh_Morning(int TotalKcal) {

    // ��ħ �޽��� ���
    if (TotalKcal <= 450) {
        printf("������ ���� �� ����!\n\n");
    }
    else if (TotalKcal <= 1050) {
        printf("���� �Ĵ��� �����ؾ߰ھ�!\n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("�ʹ� ���� ���� �� ���� �Ф�\n\n");
    }
    else {
        printf("���ۺ��� �ʹ� �� �� �Ƴ�?\n\n");
    }
    
}

int Gragh_Lunch(int TotalKcal) {
    // ���� �޽��� ���
    if (TotalKcal <= 450) {
        printf("�� �Ծ ������!\n\n");
    }
    else if (TotalKcal <= 1050) {
        printf("������ ���� !!\n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("�ʹ� ���� ���� �� ���� �Ф�\n\n");
    }
    else {
        printf("�谡 ������ ����. ���ῡ ��¿���� �׷�???!?!?!??\n\n");
    }
    
}

int Gragh_Dinner(int TotalKcal) {
    // ���� �޽��� ���
    if (TotalKcal <= 450) {
        printf("���� ������. �ʹ� �� ������ �Ƴ�??\n\n");
    }
    else if (TotalKcal <= 1050) {
        printf("���� �� �Ծ �� �� ����\n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("�� ����.\n\n");
    }
    else {
        printf("�ʹ� ���� ������ ���� �Ф�\n\n");
    }
    
}

int KcalGraph(int TotalKcal) {
    

    time_t t;
    struct tm* localTime;

    // �Էµ� kcal�� ������ �Ϸ� ���� kcal �׷���
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    GotoXY(1, 9);
    printf("[");
    for (int i = 0; i < 24; ++i) {
        if (i * 1500 / 24 <= TotalKcal) {
            printf("��"); // �׷��� ǥ��
        }
        else {
            printf(" ");
        }
    }
    printf("%d%% ]", TotalKcal * 100 / 1500);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    GotoXY(10, 10);
    printf("%d /1500 Kcal\n\n", TotalKcal);


    time(&t); // ���� �ð��� �� ������ ����
    localTime = localtime(&t); // �� ������ �ð��� ���� �ð���� ��ȯ

    if (3 <= localTime->tm_hour && localTime->tm_hour <= 9) {
        Gragh_Morning(TotalKcal);
    }
    else if (9 < localTime->tm_hour && localTime->tm_hour <= 15) {
        Gragh_Lunch(TotalKcal);
    }
    else if (15 < localTime->tm_hour && localTime->tm_hour <= 24) {
        Gragh_Dinner(TotalKcal);
    }


}
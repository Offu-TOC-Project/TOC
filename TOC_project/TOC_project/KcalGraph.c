#include <stdio.h>
#include <time.h>
#include <Windows.h>

#include "GOTOXY.h""


int Gragh_Morning(int TotalKcal) {          // ��ħ �޽��� ���
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("������ ���� �� ����!");             // ��ȭ �տ� name �߰� ����
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("���� �Ĵ��� �����ؾ߰ھ�!");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("�ʹ� ���� ���� �� ���� �Ф�");
    }
    else {
        printf("���ۺ��� �ʹ� �� �� �Ƴ�?    ");
    }
    
}

int Gragh_Lunch(int TotalKcal) {            // ���� �޽��� ���
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("�� �Ծ ������!");
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("������ ���� !!      ");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("�ʹ� ���� ���� �� ���� �Ф�");
    }
    else {
        printf("�谡 ������ ����. ���ῡ ��¿���� �׷�???!?!?!??");
    }
    
}

int Gragh_Dinner(int TotalKcal) {           // ���� �޽��� ���
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("���� ������. �ʹ� �� ������ �Ƴ�??");
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("���� �� �Ծ �� �� ����         ");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("�� ����.                          ");
    }
    else {
        printf("�ʹ� ���� ������ ���� �Ф�        ");
    }
    
}

    extern char name[100];

int KcalGraph(int TotalKcal) {
    

    time_t t;
    struct tm* localTime;

                                                // �Էµ� kcal�� ������ �Ϸ� ���� kcal �׷���
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    GotoXY(0, 9);
    printf("[");
    for (int i = 0; i < 24; ++i) {
        if (i * personalKcal() / 24 <= TotalKcal) {
            printf("��");                                                // ���� �հ� �׷��� ǥ��
        }
        else {
            printf(" ");
        }
    }
    printf("%d%%]", TotalKcal * 100 / personalKcal());

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    GotoXY(10, 10);
    printf("%d / %d Kcal\n\n", TotalKcal, personalKcal());                             // ���� �հ� ���ڷ� ǥ��
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

    printf("[%s] ", name);
    time(&t); // ���� �ð��� �� ������ ����
    localTime = localtime(&t); // �� ������ �ð��� ���� �ð���� ��ȯ

    if (3 <= localTime->tm_hour && localTime->tm_hour <= 9) {           // �ð��� ���� �޼��� ���
        Gragh_Morning(TotalKcal);
    }
    else if (9 < localTime->tm_hour && localTime->tm_hour <= 15) {
        Gragh_Lunch(TotalKcal);
    }
    else if (15 < localTime->tm_hour && localTime->tm_hour <= 24) {
        Gragh_Dinner(TotalKcal);
    }
}
#include <stdio.h>
#include <time.h>
#include <Windows.h>

#include "GOTOXY.h""


int Gragh_Morning(int TotalKcal) {          // 아침 메시지 출력
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("적당히 먹은 거 같아!");             // 대화 앞에 name 추가 예정
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("다음 식단을 조절해야겠어!");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("너무 많이 먹은 거 같아 ㅠㅠ");
    }
    else {
        printf("시작부터 너무 한 거 아냐?    ");
    }
    
}

int Gragh_Lunch(int TotalKcal) {            // 점심 메시지 출력
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("더 먹어도 괜찮아!");
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("적당히 좋아 !!       ");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("너무 많이 먹은 거 같아 ㅠㅠ");
    }
    else {
        printf("저녁에 어쩔려구 그래???!?!?");
    }
    
}

int Gragh_Dinner(int TotalKcal) {           // 저녁 메시지 출력
    if (TotalKcal <= personalKcal() * 0.3) {
        printf("부족해. 너무 안 먹은거 아냐??");
    }
    else if (TotalKcal <= personalKcal() * 0.7) {
        printf("조금 더 먹어도 될 거 같애         ");
    }
    else if (TotalKcal <= personalKcal()) {
        printf("         딱 좋아.             ");
    }
    else {
        printf("너무 많이 먹은거 같아 ㅠㅠ        ");
    }
    
}

    extern char name[100];

int KcalGraph(int TotalKcal) {
    
    int x = 21;
    int y = 5;

    time_t t;
    struct tm* localTime;

                                                // 입력된 kcal가 누적된 하루 적정 kcal 그래프
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    GotoXY(x, y + 9);;
    printf("[");
    for (int i = 0; i < 24; ++i) {
        if (i * personalKcal() / 24 <= TotalKcal) {
            printf("■");                                                // 누적 합계 그래프 표시
        }
        else {
            printf(" ");
        }
    }
    printf("%d%%]", TotalKcal * 100 / personalKcal());

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    GotoXY(x + 8, y + 10);
    printf("%d / %d Kcal\n\n", TotalKcal, personalKcal());                             // 누적 합계 숫자로 표시
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    GotoXY(x-2, y + 13);
    printf("[%s] ", name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    time(&t); // 현재 시간을 초 단위로 얻음
    localTime = localtime(&t); // 초 단위의 시간을 현지 시간대로 변환

    if (3 <= localTime->tm_hour && localTime->tm_hour <= 9) {           // 시간에 맞춰 메세지 출력
        Gragh_Morning(TotalKcal);
    }
    else if (9 < localTime->tm_hour && localTime->tm_hour <= 15) {
        Gragh_Lunch(TotalKcal);
    }
    else if (15 < localTime->tm_hour && localTime->tm_hour <= 24) {
        Gragh_Dinner(TotalKcal);
    }
}
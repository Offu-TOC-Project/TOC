#include <stdio.h>
#include <time.h>
#include <Windows.h>

#include "GOTOXY.h""

int Gragh_Morning(int TotalKcal) {          // 아침 메시지 출력
    if (TotalKcal <= 450) {
        printf("적당히 먹은 거 같아!\n\n");             // 대화 앞에 name 추가 예정
    }
    else if (TotalKcal <= 1050) {
        printf("다음 식단을 조절해야겠어!\n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("너무 많이 먹은 거 같아 ㅠㅠ\n\n");
    }
    else {
        printf("시작부터 너무 한 거 아냐?    \n\n");
    }
    
}

int Gragh_Lunch(int TotalKcal) {            // 점심 메시지 출력
    if (TotalKcal <= 450) {
        printf("더 먹어도 괜찮아!\n\n");
    }
    else if (TotalKcal <= 1050) {
        printf("적당히 좋아 !!      \n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("너무 많이 먹은 거 같아 ㅠㅠ\n\n");
    }
    else {
        printf("배가 터질거 같아. 저녁에 어쩔려구 그래???!?!?!??\n\n");
    }
    
}

int Gragh_Dinner(int TotalKcal) {           // 저녁 메시지 출력
    if (TotalKcal <= 450) {
        printf("아직 부족해. 너무 안 먹은거 아냐??\n\n");
    }
    else if (TotalKcal <= 1050) {
        printf("조금 더 먹어도 될 거 같애         \n\n");
    }
    else if (TotalKcal <= 1500) {
        printf("딱 좋아.                          \n\n");
    }
    else {
        printf("너무 많이 먹은거 같아 ㅠㅠ        \n\n");
    }
    
}

int KcalGraph(int TotalKcal) {
    

    time_t t;
    struct tm* localTime;

                                                // 입력된 kcal가 누적된 하루 적정 kcal 그래프
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    GotoXY(0, 9);
    printf("[");
    for (int i = 0; i < 24; ++i) {
        if (i * 1500 / 24 <= TotalKcal) {
            printf("■");                                                // 누적 합계 그래프 표시
        }
        else {
            printf(" ");
        }
    }
    printf("%d%%]", TotalKcal * 100 / 1500);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    GotoXY(10, 10);
    printf("%d /1500 Kcal\n\n", TotalKcal);                             // 누적 합계 숫자로 표시
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
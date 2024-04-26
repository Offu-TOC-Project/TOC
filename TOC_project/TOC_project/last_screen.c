#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define UP 1
#define DOWN 2
#define SPACE 3


int last_screen() {
	//	칼로리 합계로 인한 성공 / 실패 화면 함수
		if (TotalKcal() < personalKcal()) {
			prints_ch2();
			gotoxy(22, 25);
			printf("오늘의 식단관리 성공!!\n");
			gotoxy(22, 26);
			printf("너무 좋은데? 내일도 와줘야해ㅎㅎ\n");
		}
		else {
			prints_ch4();
			gotoxy(22, 25);
			printf("오늘의 식단관리 실패ㅜ.ㅜ\n");
			gotoxy(22, 26);
			printf("괜찮아ㅜ.ㅜ 그럴 수 있지.. 내일은 더 잘 해보자!\n");
		}
	}
}

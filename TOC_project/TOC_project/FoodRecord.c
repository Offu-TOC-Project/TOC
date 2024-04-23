#include "FoodList.h"

#include <stdio.h>
#include <Windows.h>
#include <string.h> 

#define SIZE 20

void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

struct Food foodlist[] = {
{"사과", 225, 36},
{ "요거트", 100, 750 },
};

int FoodRecord() {

	int TotalKcal = 0;
	char answer;

	// 음식 종류 & g 입력받기
	do {
		printf("┌──────────────────────────────┐\n\n");
		printf("     무엇을 먹었니? :                      ");
		printf("\n\n     얼마나 먹었어? : ___ g                 ");
		printf("\n\n└──────────────────────────────┘\n");

		GotoXY(22, 2);
		scanf("%s", foodlist->FoodName);

		GotoXY(22, 4);
		scanf(" %d", &foodlist->Gram);

		printf("\n\n%s %d g의 칼로리는 ", foodlist->FoodName, foodlist->Gram);

		// 칼로리 검색
		int find = 0;
		for (int i = 0; i < SIZE; ++i) {
			if (strcmp(foodlist->FoodName, foodlist[i].FoodName) == 0 && foodlist->Gram == foodlist[i].Gram) {
				printf("%d kcal 야.\n\n", foodlist[i].Kcal);
				TotalKcal += foodlist[i].Kcal;
				find = 1;
				break;
			}
		}
		if (!find) {
			printf("정보가 없어요 \n\n");
		}

		printf("추가 입력 (Y/N): ");
		scanf(" %c", &answer);

		system("cls");
	}while(answer == 'Y' || answer == 'y');
}
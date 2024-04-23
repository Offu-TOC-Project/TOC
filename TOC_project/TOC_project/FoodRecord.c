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
{"���", 225, 36},
{ "���Ʈ", 100, 750 },
};

int FoodRecord() {

	int TotalKcal = 0;
	char answer;

	// ���� ���� & g �Է¹ޱ�
	do {
		printf("����������������������������������������������������������������\n\n");
		printf("     ������ �Ծ���? :                      ");
		printf("\n\n     �󸶳� �Ծ���? : ___ g                 ");
		printf("\n\n����������������������������������������������������������������\n");

		GotoXY(22, 2);
		scanf("%s", foodlist->FoodName);

		GotoXY(22, 4);
		scanf(" %d", &foodlist->Gram);

		printf("\n\n%s %d g�� Į�θ��� ", foodlist->FoodName, foodlist->Gram);

		// Į�θ� �˻�
		int find = 0;
		for (int i = 0; i < SIZE; ++i) {
			if (strcmp(foodlist->FoodName, foodlist[i].FoodName) == 0 && foodlist->Gram == foodlist[i].Gram) {
				printf("%d kcal ��.\n\n", foodlist[i].Kcal);
				TotalKcal += foodlist[i].Kcal;
				find = 1;
				break;
			}
		}
		if (!find) {
			printf("������ ����� \n\n");
		}

		printf("�߰� �Է� (Y/N): ");
		scanf(" %c", &answer);

		system("cls");
	}while(answer == 'Y' || answer == 'y');
}
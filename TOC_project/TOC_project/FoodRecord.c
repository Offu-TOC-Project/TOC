#include <stdio.h>
#include <string.h>
#include <Windows.h>

#include "GOTOXY.h"
#include "Cursor.h"

#define SIZE 20

int x = 21;
int y = 5;

typedef struct {
	char FoodName[20];
	int Gram;
	int Kcal;
}Food;

Food FoodList[] = {
	{"餌婁", 290, 53},
	{"夥釭釭", 110,  79},
	{"寡", 375, 26},
	{"詬煩", 100, 38},
	{"熱夢", 215, 31},
	{"僻萄嬪纂", 190, 421},
	{"僵楝萄", 150, 229},
	{"殼陛蝙髦", 280, 170},
	{"ABC輿蝶", 100, 32},
	{"衛葬橡", 55, 383},
	{"嫣", 210, 140},
	{"絲梱蝶", 290, 268},
	{"雇犖檜", 430, 173},
	{"蘋溯", 200, 379},
	{"盪渡瞼濰", 100, 90},
	{"纂鑑", 650, 1649},
	{"螃お塵", 45, 362},
	{"塭賊", 550, 526}
};

char SaveName[SIZE][20];
int SaveGram[SIZE];
int SaveKcal[SIZE];


int TotalKcal() {

	int TotalKcal = 0;
	
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < sizeof(FoodList)/sizeof(FoodList[0]); j++){
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {	
				TotalKcal += FoodList[j].Kcal;
			}				
		}
	}
	return TotalKcal;
}

int printKcal() {


	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < sizeof(FoodList) / sizeof(FoodList[0]); j++) {
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {
				GotoXY(x, y + 7);
				printf("%s %d g曖 蠔煎葬朝 %d kcal撿.\n", FoodList[j].FoodName, FoodList[j].Gram, FoodList[j].Kcal);
				
				GotoXY(x, y + 20);
				KcalGraph(TotalKcal());						// 斜楚Щ 轎溘
			}
		}
	}
}

int RecordDiet() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < sizeof(FoodList) / sizeof(FoodList[0]); j++) {
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {

				SaveKcal[i] = FoodList[j].Kcal;
				GotoXY(x+8, i + 10);
				printf("%s %d g %d kcal\n", SaveName[i], SaveGram[i], FoodList		[j].Kcal);			// 殮溘脹 衝欽 援瞳 晦煙
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		GotoXY(x, i + 15);
		printf("----------------------------------\n");
		GotoXY(x+8, i + 16);
		printf("識 м啗 : %d kcal \n", TotalKcal(TotalKcal));
		break;
	}
	Sleep(3000);
	system("cls");
}

int FoodRecord() {
	CursorA();
	int i = 0;
	while(1){

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

		GotoXY(x, y);
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n\n");
		GotoXY(x, y + 2);
		printf("     螃棺 詳擎 擠衝 :                      ");
		GotoXY(x, y + 4);
		printf("     擠衝 曄 : ___ g                 ");
		GotoXY(x, y + 6);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		
		GotoXY(x + 22, y + 2);
		scanf(" %s", SaveName[i]);
		GotoXY(x + 15, y + 4);
		scanf(" %d", &SaveGram[i]);
		i++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		TotalKcal();
		printKcal();
				
		if (menuChoice() == 20) {
			break;

		}

		system("cls");
		
	} 
	
	system("cls");
}
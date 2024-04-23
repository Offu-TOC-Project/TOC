#include <stdio.h>
#include <string.h>
#include <Windows.h>

#define SIZE 20

void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

typedef struct {
	char FoodName[20];
	int Gram;
	int Kcal;
}Food;

Food FoodList[] = {
	{"사과", 225, 36},
	{"바나나", 100,  56},
	{"배", 100, 77},
	{"메론", 100, 77},
	{"수박", 100, 77},
};

char SaveName[SIZE][20];
int SaveGram[SIZE];

int TotalKcal() {

	int TotalKcal = 0;
	
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < sizeof(FoodList)/sizeof(FoodList[0]); j++){
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {
				GotoXY(1, 7);
				printf("%s %d g의 칼로리는 %d kcal야.\n", FoodList[j].FoodName, FoodList[j].Gram, FoodList[j].Kcal);
					
					
				TotalKcal += FoodList[j].Kcal;
				GotoXY(1, 10);
				KcalGraph(TotalKcal);
			}
		}
	}
	return TotalKcal;
}

int FoodRecord() {

	char answer;
	int i = 0;
	do
	{
		printf("┌──────────────────────────────┐\n\n");
		printf("     무엇을 먹었니? :                      ");
		printf("\n\n     얼마나 먹었어? : ___ g                 ");
		printf("\n\n└──────────────────────────────┘\n");

		GotoXY(22, 2);
		scanf(" %s", SaveName[i]);
		GotoXY(22, 4);
		scanf(" %d", &SaveGram[i]);
		i++;
		getchar();

		TotalKcal();
		
		GotoXY(1, 15);
		printf("계속 입력 하겠니? Y or N ::");
		scanf("%c", &answer);

		system("cls");
	} while (answer == 'Y' || answer == 'y');

	system("cls");
}
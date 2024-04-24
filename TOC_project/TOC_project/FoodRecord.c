#include <stdio.h>
#include <string.h>
#include <Windows.h>

#include "GOTOXY.h""

#define SIZE 20


typedef struct {
	char FoodName[20];
	int Gram;
	int Kcal;
}Food;

Food FoodList[] = {
	{"���", 225, 36},
	{"�ٳ���", 100,  56},
	{"��", 100, 77},
	{"�޷�", 100, 1500},
	{"����", 100, 77},
};

char SaveName[SIZE][20];
int SaveGram[SIZE];
int SaveKcal[SIZE];


int TotalKcal() {

	int TotalKcal = 0;
	
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < sizeof(FoodList)/sizeof(FoodList[0]); j++){
			if (strcmp(SaveName[i], FoodList[j].FoodName) == 0 && SaveGram[i] == FoodList[j].Gram) {
				GotoXY(1, 7);
				printf("%s %d g�� Į�θ��� %d kcal��.\n", FoodList[j].FoodName, FoodList[j].Gram, FoodList[j].Kcal);
								
				TotalKcal += FoodList[j].Kcal;

				GotoXY(1, 10);
				KcalGraph(TotalKcal);						// �׷��� ���
				
				SaveKcal[i] = FoodList[j].Kcal;
				GotoXY(40, i + 2);
				printf("%s    %d    %d\n", SaveName[i], SaveGram[i], FoodList[j].Kcal);			// �Էµ� �Ĵ� ���� ���
			}				
		}
	}
	return TotalKcal;
}

int FoodRecord() {

	int i = 0;
	while(1){
		printf("����������������������������������������������������������������\n\n");
		printf("     ������ �Ծ���? :                      ");
		printf("\n\n     �󸶳� �Ծ���? : ___ g                 ");
		printf("\n\n����������������������������������������������������������������\n");

		GotoXY(22, 2);
		scanf(" %s", SaveName[i]);
		GotoXY(22, 4);
		scanf(" %d", &SaveGram[i]);
		i++;
		getchar();

		TotalKcal();
				
		menuChoice();

		system("cls");
	} 

	system("cls");
}
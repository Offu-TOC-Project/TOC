#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct {
	char FoodName[20];
	int Kcal;
}FoodList;

FoodList fList[] = {
	{"���", 36},
	{"�ٳ���", 56},
	{"��", 77},
};

int FoodRecord() {

	int total = 0;
	char answer;

	char SaveName[SIZE][20];

	int i = 0;
	do
	{
		printf("�����Է� :: ");
		scanf(" %s", &SaveName[i]);
		i++;
		getchar();

		printf("��� �Է� �ϰڴ�? Y or N ::");
		scanf("%c", &answer);

	} while (answer == 'Y' || answer == 'y');

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (strcmp(SaveName[i], fList[j].FoodName) == 0) {
				printf("%s %d\n", fList[j].FoodName, fList[j].Kcal);

				total += fList[j].Kcal;
			}
		}


	}
	printf("%d\n", total);

}
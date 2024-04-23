#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct {
	char FoodName[20];
	int Kcal;
}FoodList;

FoodList fList[] = {
	{"사과", 36},
	{"바나나", 56},
	{"배", 77},
};

int FoodRecord() {

	int total = 0;
	char answer;

	char SaveName[SIZE][20];

	int i = 0;
	do
	{
		printf("음식입력 :: ");
		scanf(" %s", &SaveName[i]);
		i++;
		getchar();

		printf("계속 입력 하겠니? Y or N ::");
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
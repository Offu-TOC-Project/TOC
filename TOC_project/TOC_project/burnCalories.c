#include <stdio.h>
#include "Exercise.h"

extern struct Exercise exerciseList[];

int printExercise() {
	printf("%s: %d Kcal", exerciseList[0].sportsName, exerciseList[0].burnKcal);




	return 0;
}
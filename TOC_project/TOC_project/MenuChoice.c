#include <stdio.h>
#include <windows.h>
#include <conio.h>

#include "GOTOXY.h""

// menuChoice 키보드 값
#define LEFT 0
#define RIGHT 20
#define SPACE 4
	
int keyControl() {
	char temp = getch();

	if (temp == 'a' || temp == 'A' ) {
		return LEFT;
	}

	else if (temp == 'd' || temp == 'D')  {
		return RIGHT;
	}
	else if (temp == ' ') {
		return SPACE;
	}
	return 0;
}

int menuArrow() {
	int x = 1;
	int y = 15;

	GotoXY(x, y);
	printf("> 더 입력할래.\n");		
	GotoXY(x + 22, y);
	printf("입력 끝!!\n");		
	GotoXY(x, y);

	
	while (1) {
		int n = keyControl();
		switch (n) {
			case LEFT: {
				if (x > 1) {	
					GotoXY(x, y);
					printf(" ");
					GotoXY(x - 20, y);
					printf(">");

					x -= 20;
				}
				break;
			}
			case RIGHT: {
				if (x < 21) {	
					GotoXY(x, y);
					printf(" ");
					GotoXY(x + 20, y);
					printf(">");

					x += 20;
				}
				break;
			}
			case SPACE: {
				return x - 1;
			}
		}
	}
	return 0;
}

int menuChoice() {


	while (1) {
		int menuCode = menuArrow();

		if (menuCode == 0) {
			return 0;
		}
		else if (menuCode == 20) {
			system("cls");
			break;
		}
	}
}
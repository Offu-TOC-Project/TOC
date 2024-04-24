#include <Windows.h>

int GotoXY(int x, int y) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
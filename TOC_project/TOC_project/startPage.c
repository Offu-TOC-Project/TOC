#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Cursor.h"
#include "GOTOXY.h"
#define UP 1
#define DOWN 2
#define SPACE 3

void init_1(void) {
	system("mode con:cols=185 lines=100 | title take off calories"); // 콘솔창 크기 변경
}

// 제목 좌표로 색별 출력 함수
void printT() {
	int colorNum = 12;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(10, 1);  printf("■■■■■■\n");
	GotoXY(10, 2);	printf("■■■■■■\n");
	GotoXY(8, 3);	printf("    ■■    \n");
	GotoXY(8, 4);   printf("    ■■    \n");
	GotoXY(8, 5);	printf("    ■■    \n");
	GotoXY(8, 6);	printf("    ■■    \n");
	GotoXY(8, 7);	printf("    ■■    \n");
	GotoXY(8, 8);	printf("    ■■    \n");
}
void printa1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(14, 3);	printf("    ■■    \n");
	GotoXY(15, 4);  printf("  ■■■■  \n");
	GotoXY(15, 5);	printf(" ■■  ■■ \n");
	GotoXY(15, 6);	printf("■■■■■■■■\n");
	GotoXY(15, 7);	printf("■■    ■■\n");
	GotoXY(15, 8);	printf("■■    ■■\n");
}
void printk() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(24, 3);	printf("■■  ■■ \n");
	GotoXY(24, 4);  printf("■■ ■■  \n");
	GotoXY(24, 5);	printf("■■■■   \n");
	GotoXY(24, 6);	printf("■■■■   \n");
	GotoXY(24, 7);	printf("■■  ■■ \n");
	GotoXY(24, 8);	printf("■■   ■■\n");
}
void printe() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(31, 3);	printf(" ■■■■  \n");
	GotoXY(31, 4);  printf("■■   ■■\n");
	GotoXY(31, 5);	printf("■■   ■■\n");
	GotoXY(31, 6);	printf("■■■■■ \n");
	GotoXY(31, 7);	printf("■■       \n");
	GotoXY(31, 8);	printf(" ■■■■■\n");
}
void printO() {
	int colorNum = 11;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(42, 1);  printf("   ■■■■   \n");
	GotoXY(42, 2);	printf("  ■■■■■■  \n");
	GotoXY(42, 3);	printf(" ■■    ■■ \n");
	GotoXY(42, 4);  printf("■■      ■■\n");
	GotoXY(42, 5);	printf("■■      ■■\n");
	GotoXY(42, 6);	printf(" ■■    ■■ \n");
	GotoXY(42, 7);	printf("  ■■■■■■  \n");
	GotoXY(42, 8);	printf("   ■■■■   \n");
}
void print_f1() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(53, 3);	printf("■■■■■\n");
	GotoXY(53, 4);  printf("■■■■■\n");
	GotoXY(53, 5);	printf("■■      \n");
	GotoXY(53, 6);	printf("■■■■■\n");
	GotoXY(53, 7);	printf("■■      \n");
	GotoXY(53, 8);	printf("■■      \n");
}
void print_f2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(59, 3);	printf("■■■■■\n");
	GotoXY(59, 4);  printf("■■■■■\n");
	GotoXY(59, 5);	printf("■■      \n");
	GotoXY(59, 6);	printf("■■■■■\n");
	GotoXY(59, 7);	printf("■■      \n");
	GotoXY(59, 8);	printf("■■      \n");
}
void printC() {
	int colorNum = 2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(5, 9);   printf("   ■■■■■ \n");
	GotoXY(5, 10);	printf("  ■■■■■  \n");
	GotoXY(5, 11);	printf(" ■■         \n");
	GotoXY(5, 12);  printf("■■          \n");
	GotoXY(5, 13);	printf("■■          \n");
	GotoXY(5, 14);	printf(" ■■         \n");
	GotoXY(5, 15);	printf("  ■■■■■  \n");
	GotoXY(5, 16);	printf("    ■■■■■\n");
}
void printa2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(15, 11);	printf("   ■■    \n");
	GotoXY(15, 12); printf("  ■■■■  \n");
	GotoXY(15, 13);	printf(" ■■  ■■ \n");
	GotoXY(15, 14);	printf("■■■■■■■■\n");
	GotoXY(15, 15);	printf("■■    ■■\n");
	GotoXY(15, 16);	printf("■■    ■■\n");
}
void printl() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(24, 11);	printf("■■      \n");
	GotoXY(24, 12); printf("■■      \n");
	GotoXY(24, 13);	printf("■■      \n");
	GotoXY(24, 14);	printf("■■      \n");
	GotoXY(24, 15);	printf("■■■■■\n");
	GotoXY(24, 16);	printf("■■■■■\n");
}
void printo() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(29, 11);	printf("  ■■■■  \n");
	GotoXY(29, 12); printf(" ■■■■■■ \n");
	GotoXY(29, 13);	printf("■■    ■■\n");
	GotoXY(29, 14);	printf("■■    ■■\n");
	GotoXY(29, 15);	printf(" ■■■■■■ \n");
	GotoXY(29, 16);	printf("  ■■■■  \n");
}
void printr() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(38, 11);	printf(" ■■■■   \n");
	GotoXY(38, 12); printf("■■   ■■ \n");
	GotoXY(38, 13);	printf("■■   ■■ \n");
	GotoXY(38, 14);	printf("■■■■■  \n");
	GotoXY(38, 15);	printf("■■   ■■ \n");
	GotoXY(38, 16);	printf("■■    ■■\n");
}
void printi() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(47, 11);	printf("■■■■■■\n");
	GotoXY(47, 12); printf("■■■■■■\n");
	GotoXY(47, 13);	printf("  ■■  \n");
	GotoXY(47, 14);	printf("  ■■  \n");
	GotoXY(47, 15);	printf("■■■■■■\n");
	GotoXY(47, 16);	printf("■■■■■■\n");
}
void printe2() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(54, 11);	printf(" ■■■■  \n");
	GotoXY(54, 12); printf("■■   ■■\n");
	GotoXY(54, 13);	printf("■■   ■■\n");
	GotoXY(54, 14);	printf("■■■■■ \n");
	GotoXY(54, 15);	printf("■■       \n");
	GotoXY(54, 16);	printf(" ■■■■■\n");
}
void prints() {
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(62, 11);	printf(" ■■■■ \n");
	GotoXY(62, 12); printf("■■      \n");
	GotoXY(62, 13);	printf(" ■■■■ \n");
	GotoXY(62, 14);	printf("    ■■\n");
	GotoXY(62, 15);	printf("■■  ■■\n");
	GotoXY(62, 16);	printf(" ■■■■ \n");
}

//표정별 캐릭터 출력함수
void prints_ch1() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);

	GotoXY(25, 18);	printf("        ■■■■■■■           \n");
	GotoXY(25, 19);	printf("      ■■■■■■■■■■       \n");
	GotoXY(25, 20);	printf("    ■■■■■■  ■■■■■■   \n");
	GotoXY(25, 21);	printf("   ■■■■■■    ■■■■■■  \n");
	GotoXY(26, 22);	printf(" ■■              ■■          \n");
	GotoXY(26, 23);	printf(" ■     ■    ■     ■          \n");
	GotoXY(26, 24);	printf(" ■       ∇        ■           \n");
	GotoXY(26, 25);	printf("  ■■            ■■           \n");
	GotoXY(26, 26);	printf("    ■    ♥    ■               \n");
	GotoXY(26, 27);	printf("   ■     ♥     ■              \n");
	GotoXY(26, 28);	printf("   ■■■■■■■■■■■■■    \n");
	GotoXY(26, 29);	printf("    ■         ■                \n");

}
void prints_ch2() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ■■■■■■■■         \n");
	GotoXY(23, 6);	printf("        ■■■■■■■■■■      \n");
	GotoXY(23, 7);	printf("      ■■■■■■■■■■■■■  \n");
	GotoXY(23, 8);	printf("     ■■■■■     ■■■■■    \n");
	GotoXY(23, 9);	printf("    ■■■■         ■■■■     \n");
	GotoXY(23, 10);	printf("   ■■               ■■        \n");
	GotoXY(23, 11);	printf("   ■    ■■     ■■    ■      \n");
	GotoXY(23, 12);	printf("   ■   ■  ■   ■  ■   ■      \n");
	GotoXY(23, 13);	printf("■   ■       ∇       ■  ■     \n");
	GotoXY(23, 14);	printf(" ■   ■            ■   ■       \n");
	GotoXY(23, 15);	printf("   ■  ■          ■  ■         \n");
	GotoXY(23, 16);	printf("     ■      ♥     ■            \n");
	GotoXY(23, 17);	printf("    ■       ♥      ■           \n");
	GotoXY(23, 18);	printf("     ■            ■             \n");
	GotoXY(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	GotoXY(23, 20);	printf("       ■        ■               \n");
	GotoXY(23, 21);	printf("      ■          ■              \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void prints_ch4() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ■■■■■■■■         \n");
	GotoXY(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	GotoXY(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	GotoXY(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	GotoXY(23, 9);	printf("    ■■■■          ■■■■    \n");
	GotoXY(23, 10);	printf("   ■■               ■■        \n");
	GotoXY(23, 11);	printf("   ■   _____  _____  ■  \n");
	GotoXY(23, 12);	printf("   ■    | |    | |   ■        \n");
	GotoXY(23, 13);	printf("    ■       ■       ■           \n");
	GotoXY(23, 14);	printf("     ■            ■             \n");
	GotoXY(23, 15);	printf("      ■          ■              \n");
	GotoXY(23, 16);	printf("     ■      ♥     ■            \n");
	GotoXY(23, 17);	printf("    ■       ♥      ■           \n");
	GotoXY(23, 18);	printf("  ■  ■            ■  ■        \n");
	GotoXY(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	GotoXY(23, 20);	printf("       ■        ■               \n");
	GotoXY(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void prints_ch5() {

	int colorNum = 14;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	GotoXY(23, 5);	printf("         ■■■■■■■■         \n");
	GotoXY(23, 6);	printf("       ■■■■■■■■■■■■   \n");
	GotoXY(23, 7);	printf("      ■■■■■■■■■■■■■■\n");
	GotoXY(23, 8);	printf("     ■■■■■■    ■■■■■■ \n");
	GotoXY(23, 9);	printf("    ■■■■          ■■■■    \n");
	GotoXY(23, 10);	printf("   ■■               ■■        \n");
	GotoXY(23, 11);	printf("   ■                 ■  \n");
	GotoXY(23, 12);	printf("   ■     ■     ■     ■        \n");
	GotoXY(23, 13);	printf("    ■       ▽       ■           \n");
	GotoXY(23, 14);	printf("     ■            ■             \n");
	GotoXY(23, 15);	printf("      ■          ■              \n");
	GotoXY(23, 16);	printf("     ■      ♥     ■            \n");
	GotoXY(23, 17);	printf("    ■       ♥      ■           \n");
	GotoXY(23, 18);	printf("  ■  ■            ■  ■        \n");
	GotoXY(23, 19);	printf("     ■■■■■■■■■■■■■■ \n");
	GotoXY(23, 20);	printf("       ■        ■               \n");
	GotoXY(23, 21);	printf("       ■        ■               \n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

// 방향키 설정
int keycontrol() {
	char temp = getch();

	if (temp == 'w' || temp == 'W') {
		return UP;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == ' ') {
		return SPACE;
	}
}

// 식단시작 선택지 
int choice() {
	int x = 25;
	int y = 24;
	prints_ch5();
	GotoXY(x - 2, y); // -2는">"를 출력하기 위해 사용
	printf("> 좋아~ 도와줄게! (＾▽＾)\n");
	GotoXY(x, y + 2);
	printf("싫어! 안 도와줄래（-_-)\n");

	while (1) { // 무한 반복문 사용
		int n = keycontrol();
		switch (n) {
		case UP: {	// UP(W)이 입력 된 경우
			if (y < 25) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y + 2);
				printf(">");

				y += 2;
			}
			else {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y - 2);
				printf(">");

				y -= 2;
			}
			break;
		}
		case DOWN: {	// DOWN(s)이 입력 된 경우
			if (y > 25) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y - 2);
				printf(">");

				y -= 2;
			}

			else {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, y + 2);
				printf(">");

				y += 2;

			}
			break;
		}
		case SPACE: {	// 스페이스가 입력 된 경우
			return y - 24;
		}
		}
	}
}

void exit(int status);

void choice_code() {
	int choice_code = choice();
	if (choice_code == 0) {
		system("cls");
		prints_ch2();
		GotoXY(19, 25);
		printf("야호~ 고마워! 그럼 바로 시작하자ㅎ_ㅎ\n");
		Sleep(4000);
		system("cls");
		prints_ch5();
		GotoXY(22, 25);
		printf("오늘 먹을 식단을 적어줄래?\n");
		Sleep(4000);
		system("cls");

	}
	else {
		system("cls");
		prints_ch4();
		GotoXY(22, 25);
		printf("알았어.. 그럼 다음에 다시 와줘ㅠ\n");
		
		return exit(0);
	}
}

char name[100]; // 사용자 이름 입력받기

int start() {

	Cursor(); // 커서 없애는 함수

	printT(); printa1(); printk(); printe();
	printO(); print_f1(); print_f2();
	printC(); printa2(); printl(); printo(); printr(); printi(); printe2(); prints();

	prints_ch1();

	Sleep(5000);
	int colorNum = 15;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
	system("cls");  // 메인화면 전환

	CursorA();
	GotoXY(23, 12);
	printf("나의 이름을 지어줄래?\n\n");
	GotoXY(28, 14);
	scanf("%s", name);
	getchar();
	system("cls");

	GotoXY(23, 12);
	getSex();
	system("cls");

	GotoXY(23, 12);
	getWeight();
	system("cls");

	Cursor(); // 커서 없애는 함수

	// 캐릭터와의 대화 
	prints_ch5();
	GotoXY(22, 25);
	printf("안녕? 나는 %s(이)라고 해!\n", name);
	Sleep(3000);
	system("cls");

	prints_ch2();
	GotoXY(28, 25);
	printf("만나서 반가워!!\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	GotoXY(20, 25);
	printf("요새 내가 살이 많이 찐거 같아ㅠ.ㅠ\n");
	Sleep(3000);
	system("cls");

	prints_ch4();
	GotoXY(22, 25);
	printf("식단관리가 필요할 것 같아!!\n");
	Sleep(3000);
	system("cls");

	prints_ch5();
	GotoXY(23, 25);
	printf("식단관리 좀 도와줄래?\n");
	Sleep(3000);
	system("cls");

	// 선택지 제시
	choice_code();
}
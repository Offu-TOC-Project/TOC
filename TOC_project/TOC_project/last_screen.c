#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define UP 1
#define DOWN 2
#define SPACE 3


int last_screen() {
	//	Į�θ� �հ�� ���� ���� / ���� ȭ�� �Լ�
		if (TotalKcal() < personalKcal()) {
			prints_ch2();
			gotoxy(22, 25);
			printf("������ �Ĵܰ��� ����!!\n");
			gotoxy(22, 26);
			printf("�ʹ� ������? ���ϵ� ������ؤ���\n");
		}
		else {
			prints_ch4();
			gotoxy(22, 25);
			printf("������ �Ĵܰ��� ���Ф�.��\n");
			gotoxy(22, 26);
			printf("�����Ƥ�.�� �׷� �� ����.. ������ �� �� �غ���!\n");
		}
	}
}

#pragma once

struct Exercise
{
	char sportsName[20];		// 운동명
	int minute;		// 운동시간 (분단위)
	int burnKcal;		// 시간별 태울 수 있는 칼로리
};

extern struct Exercise exerciseList[];
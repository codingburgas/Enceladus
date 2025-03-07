#pragma once
#include "raylib.h"

class Menu
{
public:
	Menu();
	void Draw(int appState, int lessonState);
	void Update(int& appState, int& lessonState);

private:
	Rectangle Math;
	Rectangle English;
	Rectangle Lesson1;
	Rectangle Exit;
	Rectangle Return;
};


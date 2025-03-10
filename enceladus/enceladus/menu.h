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
	Rectangle Bulgarian;
	Rectangle Chemistry;
	Rectangle Lesson1;
	Rectangle Lesson2;
	Rectangle Lesson3;
	Rectangle Lesson4;
	Rectangle Lesson5;
	Rectangle Lesson6;
	Rectangle Exit;
	Rectangle Return;
};


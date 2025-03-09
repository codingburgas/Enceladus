#pragma once
#include "raylib.h"
#include "menu.h"

enum appStates
{
	EXIT,
	MAIN_MENU,
	MATH,
	ENGLISH
};
enum lessons
{
	LESSON0,
	LESSON1,
	LESSON2,
	LESSON3,
	LESSON4,
	LESSON5,
	LESSON6
};

class App {
public:
	App();
	void Draw();
	void Update();
	int getCurrentAppState();


private:
	Menu menu;
	int appState;
	int lessonState;
};

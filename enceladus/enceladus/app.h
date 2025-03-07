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
	LESSON1
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

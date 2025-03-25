#pragma once
#include "raylib.h"
#include "menu.h"

//Creates an enum for the subjects
enum appStates
{
	EXIT,
	MAIN_MENU,
	MATH,
	ENGLISH,
	BIOLOGY,
	CHEMISTRY
};
//Creates an enum for the lessons
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

// The main class for the app
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
	bool testState;
};

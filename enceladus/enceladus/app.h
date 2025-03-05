#pragma once
#include "raylib.h"
#include "menu.h"
enum appStates
{
	EXIT,
	MAIN_MENU,
	MATH
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
};

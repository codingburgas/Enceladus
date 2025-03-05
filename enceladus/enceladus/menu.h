#pragma once
#include "raylib.h"

class Menu
{
public:
	Menu();
	void Draw(int appState);
	void Update(int& appState);

private:
	Rectangle Math;
	Rectangle Exit;
	Rectangle Return;
};


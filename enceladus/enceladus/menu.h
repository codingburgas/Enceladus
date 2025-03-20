#pragma once
#include "raylib.h"
#include "test.h"

class Menu
{
public:
	Menu();
	void Draw(int appState, int lessonState, bool testState);
	void Update(int& appState, int& lessonState, bool& testState);
	void initialiseTests();

private:
	Rectangle Math;
	Rectangle English;
	Rectangle Biology;
	Rectangle Chemistry;
	Rectangle Lesson1;
	Rectangle Lesson2;
	Rectangle Lesson3;
	Rectangle Lesson4;
	Rectangle Lesson5;
	Rectangle Lesson6;
	Rectangle Exit;
	Rectangle Return;
	Rectangle Testbutton;
	Test MathTest[6];
	Test EnglishTest[6];
	Test BiologyTest[6];
	Test ChemistryTest[6];
};
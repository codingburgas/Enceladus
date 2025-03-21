#include "menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{
	 Math = {200, 300, 275, 75};
	 English = {900, 300, 275, 75};
	 Biology = { 150, 600, 400, 75 };
	 Chemistry = { 850, 600, 400, 75 };
	 Exit = {1300, 900, 200, 50 };
	 Return = {1000, 900, 200, 50 };
	 Testbutton = { 150, 550, 350, 75 };
	 Lesson1 = {200, 200, 275, 75 };
	 Lesson2 = { 1000, 200, 275, 75 };
	 Lesson3 = { 200, 500, 275, 75 };
	 Lesson4 = { 1000, 500, 275, 75 };
	 Lesson5 = { 200, 800, 275, 75 };
	 Lesson6 = { 1000, 800, 275, 75 };
	 initialiseTests();
}

void Menu::Draw(int appState, int lessonState, bool testState)
{
	DrawRectangleRec(Exit, BLACK);
	DrawText("Exit", 1350, 900, 50, WHITE);
	DrawRectangleLinesEx({ 0, 900, 1500, 50, }, 3, BLACK);

	switch (appState)
	{
	case 1:
	DrawText("E-Learn", 550, 10, 100, WHITE);
	DrawText("Coose Your Subject", 400, 100, 75, WHITE);
	DrawRectangleRec(Math, BLACK);
	
	DrawText("Math", 245, 300, 75, WHITE);
	DrawRectangleRec(English, BLACK);
	DrawText("English", 910, 300, 75, WHITE);
	DrawRectangleRec(Biology, BLACK);
	DrawText("Biology", 220, 600, 75, WHITE);
	DrawRectangleRec(Chemistry, BLACK);
	DrawText("Chemistry", 865, 600, 75, WHITE);
	
	break;
	case 2:
		if (lessonState != 0)
		{
			DrawRectangleRec(Testbutton, BLACK);
			DrawText("Test3", 180, 550, 75, WHITE);
		}
		switch (lessonState)
		{
		case 0:
			DrawText("Subject: Math", 425, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math1", 400, 100, 50, WHITE);
			if (testState)
			{
				MathTest[0].Draw();
			}
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math6", 400, 100, 50, WHITE);
			break;
		}
	break;
	case 3:
		switch (lessonState) {
		case 0:
			DrawText("Subject: English", 375, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English1", 400, 100, 50, WHITE);
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("English6", 400, 100, 50, WHITE);
			break;
		}
		break;
	case 4:
		switch (lessonState) {
		case 0:
			DrawText("Subject: Biology", 350, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology1", 400, 100, 50, WHITE);
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Biology6", 400, 100, 50, WHITE);
			break;
		}
		break;
	case 5:
		switch (lessonState) {
		case 0:
			DrawText("Subject: Chemistry", 300, 0, 100, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 225, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 1025, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 225, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 1025, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 225, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 1025, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry1", 400, 100, 50, WHITE);
			break;
		case 2:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry2", 400, 100, 50, WHITE);
			break;
		case 3:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry3", 400, 100, 50, WHITE);
			break;
		case 4:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry4", 400, 100, 50, WHITE);
			break;
		case 5:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry5", 400, 100, 50, WHITE);
			break;
		case 6:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Chemistry6", 400, 100, 50, WHITE);
			break;
		}
		break;
	}
}

void Menu::Update(int& appState, int& lessonState, bool& testState)
{
	SetMouseCursor(MOUSE_CURSOR_ARROW);

	if (CheckCollisionPointRec(GetMousePosition(), Exit))
	{
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			appState = 0;
			SetMouseCursor(MOUSE_CURSOR_ARROW);
		}

	}
	
	if (CheckCollisionPointRec(GetMousePosition(), Return))
	{
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			testState = false;
			MathTest[0].Reset();
			if (appState != 1 && lessonState == 0)
			{
				appState = 1;
			}
			if (lessonState != 0)
			{
				lessonState = 0;
			}
			
			SetMouseCursor(MOUSE_CURSOR_ARROW);
		}
	}

	switch (appState)
	{
	case 1:
		if (CheckCollisionPointRec(GetMousePosition(), Math))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 2;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
				
		}
		if (CheckCollisionPointRec(GetMousePosition(), English))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 3;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Biology))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 4;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Chemistry))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				appState = 5;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		break;
	}
	switch (lessonState)
	{
	case 0:
		if (CheckCollisionPointRec(GetMousePosition(), Lesson1))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 1;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson2))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 2;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson3))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 3;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson4))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 4;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson5))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 5;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		if (CheckCollisionPointRec(GetMousePosition(), Lesson6))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				lessonState = 6;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		break;
	case 1:
		if (CheckCollisionPointRec(GetMousePosition(), Testbutton))
		{
			SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				testState = true;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}
		}
		if (testState)
		{
			MathTest[0].Update();
		}
		break;
	}
}

void Menu::initialiseTests()
{
	MathTest[0] = Test(3, 0, 1);
	MathTest[0].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
	MathTest[0].addQuestion("What is 8 + 2", { "ten", "Two", "Three", "one" });
	MathTest[0].addQuestion("What is 1 + 2", { "One", "Three", "Two", "Four" });

	MathTest[1].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
	MathTest[2].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
	MathTest[3].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
	MathTest[4].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
	MathTest[5].addQuestion("What is 2 + 2", { "One", "Two", "Three", "Four" });
}
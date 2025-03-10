#include "menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{
	 Math = {100, 200, 275, 75};
	 English = {800, 200, 275, 75};
	 Bulgarian = { 100, 500, 275, 75 };
	 Chemistry = { 800, 500, 275, 75 };
	 Exit = {1300, 900, 200, 50 };
	 Return = {1000, 900, 200, 50 };
	 Lesson1 = {100, 200, 275, 75 };
	 Lesson2 = { 500, 200, 275, 75 };
	 Lesson3 = { 100, 500, 275, 75 };
	 Lesson4 = { 500, 500, 275, 75 };
	 Lesson5 = { 100, 800, 275, 75 };
	 Lesson6 = { 500, 800, 275, 75 };
}

void Menu::Draw(int appState, int lessonState)
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
	DrawText("Math", 145, 200, 75, WHITE);
	DrawRectangleRec(English, BLACK);
	DrawText("English", 810, 200, 75, WHITE);
	DrawRectangleRec(Bulgarian, BLACK);
	DrawText("Bulgarian", 145, 500, 45, WHITE);
	DrawRectangleRec(Chemistry, BLACK);
	DrawText("Chemistry", 810, 500, 50, WHITE);
	break;
	case 2:
		switch (lessonState)
		{
		case 0:
			DrawText("Math", 500, 100, 50, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 125, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 525, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 125, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 525, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 125, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 525, 800, 55, WHITE);
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math1", 400, 100, 50, WHITE);
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
			DrawText("English", 500, 100, 50, WHITE);
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawRectangleRec(Lesson1, BLACK);
			DrawText("Lesson1", 125, 200, 55, WHITE);
			DrawRectangleRec(Lesson2, BLACK);
			DrawText("Lesson2", 525, 200, 55, WHITE);
			DrawRectangleRec(Lesson3, BLACK);
			DrawText("Lesson3", 125, 500, 55, WHITE);
			DrawRectangleRec(Lesson4, BLACK);
			DrawText("Lesson4", 525, 500, 55, WHITE);
			DrawRectangleRec(Lesson5, BLACK);
			DrawText("Lesson5", 125, 800, 55, WHITE);
			DrawRectangleRec(Lesson6, BLACK);
			DrawText("Lesson6", 525, 800, 55, WHITE);
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

	}
	

}

void Menu::Update(int& appState, int& lessonState)
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
		if (CheckCollisionPointRec(GetMousePosition(), Bulgarian))
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
				appState = 4;
				SetMouseCursor(MOUSE_CURSOR_ARROW);
			}

		}
		break;
	case 2:
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
		case 3:
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
	}
}

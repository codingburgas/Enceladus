#include "menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{
	 Math = {100, 200, 275, 75};
	 English = {800, 200, 275, 75};
	 Exit = {1300, 900, 200, 50 };
	 Return = {1000, 900, 200, 50 };
	 Lesson1 = {100, 200, 275, 75 };
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
			break;
		case 1:
			DrawRectangleRec(Return, BLACK);
			DrawText("Return", 1010, 900, 50, WHITE);
			DrawText("Math", 400, 100, 50, WHITE);

		}
	break;
	case 3:
		DrawText("English", 500, 100, 50, WHITE);
		DrawRectangleRec(Return, BLACK);
		DrawText("Return", 1010, 900, 50, WHITE);
		break;
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
		break;
	}
}

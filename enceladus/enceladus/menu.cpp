#include "menu.h"

Menu::Menu()
{
	 Math = {100, 200, 200, 50 };
	 Exit = {1300, 900, 200, 50 };
	 Return = {1000, 900, 200, 50 };
}

void Menu::Draw(int appState)
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
	DrawText("Math", 135, 200, 50, WHITE);
	break;
	case 2:
		DrawText("Hello World", 500, 100, 50, WHITE);
		DrawRectangleRec(Return, BLACK);
		DrawText("Return", 1010, 900, 50, WHITE);
	}
}

void Menu::Update(int& appState)
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
			appState--;
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
	}
}

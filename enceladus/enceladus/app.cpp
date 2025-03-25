#include "app.h"

App::App()
{
	appState = MAIN_MENU;
	lessonState = LESSON0;
	testState = false;
}

void App::Update()
{
	menu.Update(appState, lessonState, testState);
}

int App::getCurrentAppState()
{
	return appState;
}

void App::Draw()
{
	menu.Draw(appState, lessonState, testState);
}
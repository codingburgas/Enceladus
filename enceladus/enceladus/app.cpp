#include "app.h"

App::App()
{
	appState = MAIN_MENU;
	lessonState = LESSON0;
}

void App::Update()
{
	menu.Update(appState, lessonState);
}

int App::getCurrentAppState()
{
	return appState;
}

void App::Draw()
{
	menu.Draw(appState, lessonState);
}



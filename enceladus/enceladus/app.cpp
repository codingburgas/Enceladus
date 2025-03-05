#include "app.h"

App::App()
{
	appState = MAIN_MENU;
}

void App::Update()
{
	menu.Update(appState);
}

int App::getCurrentAppState()
{
	return appState;
}

void App::Draw()
{
	menu.Draw(appState);
}



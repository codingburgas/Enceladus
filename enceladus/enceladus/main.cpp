#include "raylib.h"
#include "app.h"

int main()
{
    const int screenWidth = 1500;
    const int screenHeight = 950;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    App* app = new App;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        app->Update();
        BeginDrawing();

        app->Draw();
        if (app->getCurrentAppState() == 0)
            break;

        ClearBackground(BLUE);

        EndDrawing();
    }
    CloseWindow();
}
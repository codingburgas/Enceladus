#include "raylib.h"
#include "app.h"

int main()
{
    //Initialize the window
    const int screenWidth = 1500;
    const int screenHeight = 950;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    // Create application instance
    App* app = new App;

    // Sets amount of frames per second
    SetTargetFPS(60);

    // The game loop where everything happens
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
#include "raylib.h"
#include "app.h"

int main()
{
    const int screenWidth = 1500;
    const int screenHeight = 950;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    App App;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        App.Update();
        BeginDrawing();
 
        App.Draw();

        if (App.getCurrentAppState() == 0)
            break;

        ClearBackground(PURPLE);

        EndDrawing();
    }
    CloseWindow();
}
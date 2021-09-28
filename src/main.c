#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Main Window");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello Word!", 10, 10, 20, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
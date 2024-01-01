//
// Created by Mahros on 1/1/2024.
//
#include <iostream>
#include "include/Constants.h"
#include "lib/raylib-5.0_win64_mingw-w64/include/raylib.h"
using namespace std;
using namespace Constants;

int main() {
    try{
        InitWindow(screenWidth, screenHeight, "PONG_GAME");

        SetTargetFPS(frameRate);

        // Main GAME loop
        while (!WindowShouldClose())    // Detect window close button or ESC key
        {
            // Draw
            BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Welcome to out PONG_GAME", 190, 80, 20, LIGHTGRAY);
            DrawText("Authors:", 190, 150, 20, LIGHTGRAY);
            DrawText(authors.c_str(), 300, 150, 20, LIGHTGRAY);

            EndDrawing();
        }

        // Close
        CloseWindow();
    }catch (const exception& ERROR){
        cerr << ERROR.what() << "\n";
        system("pause");
    }
    return 0;

}
#pragma once
#include <raylib.h>

class Window
{
public:
    Window(float width, float height, const char *title)
    {
        InitWindow(width, height, title);
    }

    ~Window()
    {
        CloseWindow();
    }

    bool shouldClose() const
    {
        return WindowShouldClose(); // Check if application should close
    }

    bool stayOpen() const
    {
        return !shouldClose(); // Return true if the window should stay open
    }

    bool isReady() const
    {
        return IsWindowReady(); // Check if window is ready
    }
};

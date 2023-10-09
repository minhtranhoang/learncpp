
#include <iostream>

struct Point
{
    int x;
    int y;
};

void DrawLine(int x1, int y1, int x2, int y2)
{
    std::cout << "PointStart.x = " << x1 << std::endl;
    std::cout << "PointStart.y = " << y1 << std::endl;
    std::cout << "PointEnd.x = " << x2 << std::endl;
    std::cout << "PointEnd.y = " << y2 << std::endl;
}

void DrawLine(Point start, Point end)
{
    std::cout << "PointStart.x = " << start.x << std::endl;
    std::cout << "PointStart.y = " << start.y << std::endl;
    std::cout << "PointEnd.x = " << end.x << std::endl;
    std::cout << "PointEnd.y = " << end.y << std::endl;
}

void app_struct_main(void)
{
    Point start = {10, 20};
    Point end = {11, 33};

    DrawLine(start, end);
}
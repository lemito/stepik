#include <stdio.h>

struct Point
{
    int x;
    int y;
};
struct Rect
{
    struct Point lt; // координаты левой верхней вершины
    struct Point rb; // координаты правой нижней вершины
};

int area(struct Rect a)
{
    return abs((a.lt.x - a.rb.x) * (a.lt.y  - a.rb.y));
};

int main(int argc, char const *argv[])
{
    struct Point lt = {-7, 5};
    struct Point rb = {5, -3};
    struct Rect a = {lt, rb};
    printf("%d %d %d %d %d", a.lt.x, a.lt.y, a.rb.x, a.rb.y, area(a));
    return 0;
}
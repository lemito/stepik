#include <stdio.h>

struct Rect
{
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

int area(struct Rect a){
    return a.height * a.width;
};

int main(int argc, char const *argv[])
{
    struct Rect a = {-7, 5, 12, 8};
    printf("%d %d %d %d %d", a.x, a.y, a.width, a.height);
    return 0;
}

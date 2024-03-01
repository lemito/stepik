#include "stdio.h"

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx){
    p->x = p->x + dx;
};


int main(int argc, char const *argv[])
{
    struct Rect a = {-7, 5, 12, 8};
    int dx = -6;
    return 0;
}

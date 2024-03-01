#include "stdio.h"

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

void move(struct Rect * p, int dx){
    p->lt.x += dx;
    p->rb.x += dx;
};


int main(int argc, char const *argv[])
{   
    struct Point lt = {-7, 5};
    struct Point rb = {12, 8};
    struct Rect a = {lt, rb};
    int dx = -6;
    return 0;
}

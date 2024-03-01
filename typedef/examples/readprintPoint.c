#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point readPoint();
void printPoint(struct point p);

int main()
{
    struct point p = readPoint();
    printPoint(p);
}

struct point readPoint()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    return (struct point){x, y};
}

void printPoint(struct point p)
{
    printf("(%d,%d) ", p.x, p.y);
}
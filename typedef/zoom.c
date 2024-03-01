#include <stdio.h>

// typedef struct {
//     int x,y;
//     double r;
// } Circle;

// Circle zoom(Circle c, int k);

// int main()
// {
//     Circle c = {1, 2, 3};
//     Circle z = zoom(c, 5);
//     printf("%.0lf\n", z.r);
//     return 0;
// }

// Circle zoom(Circle c, int k)
// {
//     Circle res = c;
//     res.r *= k;
//     return res;
// }
typedef struct Vec
{
    float x;
    float y;
} Vector;

int main()
{
    Vector vec;
    Vector *pvec;
    int x = 2, y = 3;
    pvec->x = x;
    vec.y = y;
    printf("x: %f y: %f\n", pvec->x, vec.y);
}
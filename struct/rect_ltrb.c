#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

int main(int argc, char const *argv[])
{
    struct Point lt = {-7, 5};
    struct Point rb = {5, -3};
    struct Rect b = {lt, rb};
    return 0;
}

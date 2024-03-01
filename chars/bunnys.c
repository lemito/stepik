#include <stdio.h>

int main(int argc, char const *argv[])
{
    char r;
    int c = 0;
    scanf("%c%d", &r, &c);
    printf("%c%d %c%d %c%d %c%d", r - 1, c, r, c + 1, r + 1, c, r, c - 1);
}

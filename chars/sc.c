#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c = 0;
    char r;
    scanf("%c%d", &r, &c);
    printf("%c%d", r, c + 1);
    return 0;
}

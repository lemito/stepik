#include <stdio.h>

typedef struct
{
    int h;   // часы
    int min; // минуты (от 0 до 59)
} TicTac;

// получает показание часов a и возвращает показание этих часов
// через min минут, .
TicTac after(TicTac a, int min)
{
    TicTac res = {0, 0};
    int mins = a.min + (a.h * 60);
    int res_min = mins + min;
    res.h = ((res_min / 60) % 12);
    res.min = res_min % 60;
    return res;
};

// "переводит" вперед стрелки этих часов (me)
// на a.h часов и a.min минут
void forward(TicTac *me, TicTac a)
{
    me->h = (me->h + a.h) % 12;
    me->min = (me->min + a.min) % 60;
};

// "переводит" назад стрелки этих часов (me)
// на a.h часов и a.min минут
void backward(TicTac *me, TicTac a)
{
    int me_mins = me->h * 60 + me->min;
    int a_mins = a.h * 60 + a.min;
    int res_mins = me_mins - a_mins;
    if (res_mins < 0)

        me->h = res_mins / 60 % 12;
    me->min = res_mins % 60;
};

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b)
{
    if (a.h == b.h && a.min == b.min)
    {
        return 1;
    }
    return 0;
};

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a)
{
    printf("%02d:%02d\n", a.h, a.min);
};

int main()
{
    TicTac a, b, c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n", isEqualTime(a, b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}
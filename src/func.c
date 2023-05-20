#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
int ci(int* a, int* b)
{
    srand(time(0));
    *a = rand() % 10 + 1;

    if (*a > *b) {
        *a = *b;
    }

    if (*a < 11 && *a <= *b) {
        return 0;
    }

    return 1;
}

int cm(int* a)
{
    if (*a == 1) {
        *a = 2;

        return 0;
    } else {
        *a = 1;

        return 1;
    }
}

int eg(int* a)
{
    if (*a == 1) {
        printf("Вы победили!\n");

        return 0;
    } else {
        printf("Победил компьютер\n");

        return 1;
    }
}
int egpvp(int* a)
{
    if (*a == 1) {
        printf("Победил первый игрок!\n");

        return 0;
    } else {
        printf("Победил второй игрок!\n");

        return 1;
    }
}
int mi(int* a, int* b, bool* c)
{
    if ((*a >= 1) && (*a <= 10) && (*a <= *b)) {
        *c = true;

        return 0;
    } else {
        printf("Некорректный ввод!Повторите ввод\n\n\n\n");

        *c = false;

        return 1;
    }
}
void pravila()
{
    printf("На столе лежат 100 спичек,каждый ход игрок или компьютер по "
           "очереди берут со стола от "
           "1 до 10 спичек,проигрывает тот,кто берет последнюю"
           "спичку.\n\n\n\n");
}
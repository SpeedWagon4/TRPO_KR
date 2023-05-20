#include "func.h"

int main(void)
{
    srand(time(0));
    pravila();
    printf("1.Для игры двоем\n2.Для игры против компьютера\n");
    scanf("%d", &ch);
    Motion = 1;
    Count = InitialCount;
    switch (ch) {
    case 1:
        do {
            if (Motion == 1) {
                do {
                    printf("\n\nХод первого игрока.На столе %d спичек.\n",
                           Count);
                    printf("Сколько вы хотите взять спичек?\n");
                    scanf("%d", &Num);
                    mi(&Num, &Count, &Correct); // manual input ручной ввод
                } while (!Correct);
            } else {
                do {
                    printf("\n\nХод второго игрока.На столе %d спичек.\n",
                           Count);
                    printf("Сколько вы хотите взять спичек?\n");
                    scanf("%d", &Num);
                    mi(&Num, &Count, &Correct); // manual input ручной ввод
                } while (!Correct);
            }
            Count -= Num;
            cm(&Motion); // check motion проверка хода
        } while (Count > 0);
        egpvp(&Motion); // end game конец игры
        break;

    case 2:

        do {
            if (Motion == 1) {
                do {
                    printf("Ваш ход.На столе %d спичек.\n", Count);
                    printf("Сколько вы хотите взять спичек?\n");
                    scanf("%d", &Num);
                    mi(&Num, &Count, &Correct); // manual input ручной ввод

                } while (!Correct);
            } else {
                do {
                    ci(&Num, &Count); // computer input компьютерный ввод
                    printf("Ход компьютера.Берет %d спичек\n\n\n\n", Num);
                } while (!Correct);
            }
            Count -= Num;
            cm(&Motion); // check motion проверка хода
        } while (Count > 0);
        eg(&Motion); // end game конец игры
        break;
    }
}
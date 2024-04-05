#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int n = 10;
    int mas[n];
    int max = 0;

    printf("¬вед≥ть %d натуральних чисел:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mas[i]);

        if (mas[i] > mas[max])
        {
            max = i;
        }
    }

    if (max != 0)
    {
        int temp = mas[0];
        mas[0] = mas[max];
        mas[max] = temp;

        printf("ѕерший елемент був зм≥нений м≥сц€ми з найб≥льшим елементом.\n");
    } else
    {
        printf("ѕерший елемент вже Ї найб≥льшим.\n");
    }

    printf("ћасив п≥сл€ зм≥н:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", mas[i]);
    }

    return 0;
}

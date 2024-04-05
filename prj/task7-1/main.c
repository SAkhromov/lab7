#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    char word[200];
    int ra = 0;
    int len = 0;
    int big_latter = 0;

    printf("Введіть слово (закінчіть '#'): ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == 'р' && word[i + 1] == 'а' || word[i] == 'Р' && word[i + 1] == 'А' || word[i] == 'p' && word[i + 1] == 'a' ||word[i] == 'p' && word[i + 1] == 'A' )
        {
            ra++;
        }

        if (word[i] != '#')
        {
            len++;

            if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'А' && word[i] <= 'Я'))
            {
                big_latter++;
            }
        }
        else
        {
            break;
        }
    }

    if (ra > 0)
    {
        printf("Кількість складів 'ра' у слові: %d\n", ra);
    }
    else
    {
        printf("Довжина слова: %d\n", len);
        printf("Кількість заголовкових літер у слові: %d\n", big_latter);
    }


    return 0;
}

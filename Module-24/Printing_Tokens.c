#include <stdio.h>

int main()
{
    char sentence[1005];
    fgets(sentence, 1005, stdin);

    int i = 0;

    while (sentence[i] != '\0')
    {

        if (sentence[i] != ' ')
        {
            printf("%c", sentence[i]);
        }
        else
        {

            printf("\n");
        }
        i++;
    }

    printf("\n");

    return 0;
}

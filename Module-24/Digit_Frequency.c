// #include <stdio.h>

// int main()
// {
//     char s[1005];
//     fgets(s, 1005, stdin);

//     int i = 0;
//     int countZero = 0, countOne = 0, countTwo = 0, countThree = 0, countFour = 0, countFive = 0, countSix = 0, countSeven = 0, countEight = 0, countNine = 0;

//     while (s[i] != '\0')
//     {
//         if (s[i] == '0')
//         {
//             countZero++;
//         }
//         if (s[i] == '1')
//         {
//             countOne++;
//         }
//         if (s[i] == '2')
//         {
//             countTwo++;
//         }
//         if (s[i] == '3')
//         {
//             countThree++;
//         }
//         if (s[i] == '4')
//         {
//             countFour++;
//         }
//         if (s[i] == '5')
//         {
//             countFive++;
//         }
//         if (s[i] == '6')
//         {
//             countSix++;
//         }
//         if (s[i] == '7')
//         {
//             countSeven++;
//         }
//         if (s[i] == '8')
//         {
//             countEight++;
//         }
//         if (s[i] == '9')
//         {
//             countNine++;
//         }
//         i++;
//     }

//     printf("%d %d %d %d %d %d %d %d %d %d", countZero, countOne, countTwo, countThree, countFour, countFive, countSix, countSeven, countEight, countNine);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char s[1005];
    fgets(s, 1005, stdin);

    int count[10] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        count = count + a[i];
    }

    printf("%d", count);

    return 0;
}
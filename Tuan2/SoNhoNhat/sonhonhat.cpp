#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {

        printf("NO SOLUTION");
        return 0;
    }
    for (int i = n; i < 999; i++)
    {
        if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5 == 1 && i % 6 == 1)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("NO SOLUTION");
    return 0;
}

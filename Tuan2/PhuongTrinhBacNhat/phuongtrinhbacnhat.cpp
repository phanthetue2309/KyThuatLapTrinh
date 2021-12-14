#include <stdio.h>

int main()
{

    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    if (a == 0)
    { 
        if (b == 0)
        {
            printf("EVERY NUMBER IS A SOLUTION");
        }
        else
        { 
            printf("NO SOLUTION");
        }
    }
    else
    {
        printf("%0.2f", -b / a);
    }

    return 0;
}
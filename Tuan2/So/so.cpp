#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 9)
    {

        printf("UNKNOWN");
        return 0;
    }
    switch (n)
    {
    case 0:
        printf("NUMBER ZERO");
        break;
    case 1:
        printf("NUMBER ONE");
        break;
    case 2:
        printf("NUMBER TWO");
        break;
    case 3:
        printf("NUMBER THREE");
        break;
    case 4:
        printf("NUMBER FOUR");
        break;
    case 5:
        printf("NUMBER FIVE");
        break;
    case 6:
        printf("NUMBER SIX");
        break;
    case 7:
        printf("NUMBER SEVEN");
        break;
    case 8:
        printf("NUMBER EIGHT");
        break;
    case 9:
        printf("NUMBER NINE");
        break;
    }
    return 0;
}

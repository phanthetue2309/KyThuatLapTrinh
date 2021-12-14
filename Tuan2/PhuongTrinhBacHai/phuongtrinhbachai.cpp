#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float delta = b * b - 4 * a * c;
    if (delta < 0 || a == 0)
    {
        printf("NO SOLUTION");
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("%.2f", x1);
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b - delta) / (2 * a);
        x2 = (-b + delta) / (2 * a);
        printf("%.2f %.2f", x1, x2);
    }
    return 0; 
}
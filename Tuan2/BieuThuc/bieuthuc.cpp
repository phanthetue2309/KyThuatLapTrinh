#include <stdio.h>
int main()
{
    float a, b, x;
    char op;
    scanf("%f", &a);
    scanf("%c", &op);
    scanf("%f", &b);
    switch (op)
    {
    case '+':
        x = a + b;
        printf("%0.1f", x);
        break;
    case '-':
        x = a - b;
        printf("%0.1f", x);
        break;
    case '*':
        x = a * b;
        printf("%0.1f", x);
        break;
    case '/':
        x = a / b;
        printf("%0.1f", x);
        break;
    }
    return 0;
}

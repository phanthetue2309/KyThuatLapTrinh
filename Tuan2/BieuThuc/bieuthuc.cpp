#include <stdio.h>
int main()
{
    float a,b;
    char op; 
    scanf("%d", &a);
    scanf("%c", &op);
    scanf("%d", &b);
    if (op == '+') {
        float x = a + b;
        printf("%0.1f", x);
    }
    return 0;
}

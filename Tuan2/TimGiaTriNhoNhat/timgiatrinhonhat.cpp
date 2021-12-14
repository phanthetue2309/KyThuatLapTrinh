#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int minValue = a;
 
    if(b < minValue){
        minValue = b;
    }
 
    if(c < minValue){
        minValue = c;
    }
    printf("%d",minValue);
    return 0;
}

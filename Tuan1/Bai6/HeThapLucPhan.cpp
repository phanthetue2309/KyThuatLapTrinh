#include <stdio.h>
#include <stdlib.h>
 
void Hex(int n) 
{
    if (n < 16)  
    {
        printf("%c","0123456789ABCDEF"[n]); 
        return;
    } 
    else Hex(n / 16);
    printf("%c","0123456789ABCDEF"[n % 16]);
}
 
int main() {
    int n;
    scanf("%d", &n);
    Hex(n);
    return 0;
}
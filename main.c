#include <stdio.h>

int main(void) {
    int x, y;
    char c;

    printf("enter the calculation : ");
    scanf("%d %c %d", &x, &c, &y);

    if (c=='+')
        printf("%d + %d = %d", x, y, x+y);
    else if (c=='-')
        printf("%d - %d = %d", x, y, x-y);
    else if (c=='*')
        printf("%d * %d = %d", x, y, x*y);
    else
        printf("%d / %d = %d", x, y, x/y);
    
    
return 0;

}
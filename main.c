#include <stdio.h>

int main(void) {
    int x=0;
    char c;

    printf("input a string : ");
    
    while ((c = getchar()) != '\n')
    {
        if ((c>='0') && (c<='9'))
        {
            x++;
        }
            
    }

    printf("the number of digits is %d", x);

return 0;

}
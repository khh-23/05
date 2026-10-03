#include <stdio.h>

int main(void) {
    int answer=59, num, s=0;

    do
    {
        printf("Guess a number : ");
        scanf("%d", &num);
        s++;
        if (answer > num)
            printf("low!\n");
        else if (answer < num)
            printf("high!\n");

    } while (num != answer);

    
     printf("Congratulation! trials:%d", s);

    
return 0;

}
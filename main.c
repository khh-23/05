#include <stdio.h>

int main(void) {
    int sum=0, num, i;

    printf("input a number : ");
    scanf("%d", &num);

    for (i=0;i<=num;i++)
    {
        sum += i;
    }
    
    printf("The result is : %d",sum);

return 0;

}
#include <stdio.h>

int main()
{
    int fat, num, i;
    
    printf("\nEntre com um número: ");
    scanf("%d", &num);
    
    fat = 1;
    for(i=1;i<=num;i++)
    {
        fat = fat * i;
    }
    
    printf("\nFat(%d)=%d \n\n", num, fat);
    
    return 0;
}
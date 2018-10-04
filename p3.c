#include <stdio.h>

int main()
{
    int n, i;
    
    printf("\nEntre com um numero:");
    scanf("%d", &n);
    
    printf("\nTabuada de %d\n", n);
    
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n", n, i, n*i);
        
    return 0;
}
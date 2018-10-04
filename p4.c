#include <stdio.h>

int main()
{
    int lin, i, j;
    
    printf("\nEntre com o numero de linhas:");
    scanf("%d", &lin);
    
    for(i=1;i<=lin;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
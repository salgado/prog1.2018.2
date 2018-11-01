#include <stdio.h>

int main()
{
    int matA[3][3];
    int i, j;
    
    //popular os elementos da matriz
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEntre com o elemento [%d, %d]:", i+1,j+1);
            scanf("%d", &matA[i][j]);
        }
    }
    
    //imprimir a matriz
    for(i=0; i<3; i++)
    {
        printf("\n| ");
        for(j=0; j<3; j++)
        {
            printf("%d ", matA[i][j]);
        }
        printf("|");
    }
    
    printf("\n");
    
    //imprimir a diagonal principal
    printf("\nDiagonal principal: | ");
    for(i=0; i<3; i++)
    {
        printf("%d ", matA[i][i]);
    }
    printf(" | ");
    
    printf("\n\n");
    
    return 0;
    
}
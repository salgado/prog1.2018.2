#include <stdio.h>

int main()
{
    int numero;
    int resto;
    
    printf("\nEntre com um numero:");
    scanf("%d", &numero);
    
    resto = numero % 2;
    
    if(resto==0)
    {
        printf("\nEste numero eh par!!!\n\n");
    }
    else
    {
        printf("\nEste numero eh IMpar!!!\n\n");
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int n, i=1, soma=0;
    
    printf("\nEntre com um numero:");
    scanf("%d", &n);
 
    for(i=1;i<=n;i++)   
    {
        soma = soma + i;
    }
    
    printf("\nA soma dos %d primeiros numeros = %d\n\n", n, soma);
    
    return 0;
}
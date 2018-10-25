#include <stdio.h>

int main()
{
    int num,j, i=0, result, resto;
    int binario[16];
    
    printf("\nEntre com um numero decimal:");
    scanf("%d", &num);
    do
    {
        result = num / 2;
        resto = num % 2;
        binario[i++] = resto;
        num = result;
    }
    while (result != 1);
    binario[i] = 1;
    
    //imprimir vetor na ordem inversa
    printf("\nConvertido para binario: ");
    
    for(j=i;j>=0;j--)
    {
        printf("%d", binario[j]);
    }
    
    printf("\n\n");
    
    return 0;
}
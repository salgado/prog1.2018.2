#include <stdio.h>

int main()
{
    int idade;
    
    printf("\nEntre com uma idade:");
    scanf("%d", &idade);
    
    if(idade<16)
    {
        printf("\nVocê não pode votar!!!!");
    }
    else if( (idade<18) 
    {
        printf("\nVoto Facultativo!!!");
    }
    else if(idade<=70)
    {
        printf("\nVoto obrigatório!!!");
    }
    else
    {
        printf("\nVoto facultativo");
    }
    
    return 0;
}
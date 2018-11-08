#include <stdio.h>
#include <string.h>

int main()
{
    int ini, fim, tam, cPal=0;
    char palavra[20], continuar;
    
    do
    {
        cPal = 0;
        printf("\nEntre com uma palavra:");
        gets(palavra);
        
        tam = strlen(palavra);
        fim = tam-1;
        
        for(ini=0; ini<tam; ini++)
        {
            if(palavra[ini] == palavra[fim])
                cPal++;
            fim--;    
        }
        
        if(cPal == tam)
        {
            printf("\nEH Palindormo!!!");
        }
        else
        {
            printf("\nNAO EH Palindromo!!!");
        }
        printf("Deseja continuar[s/n]?");
        scanf("%c", &continuar );
    }
    while(continuar != 'n');
    
    return 0;
}
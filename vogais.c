#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int iVog=0, tam=0, i;
    
    printf("\nEntre com a frase:");
    gets(frase);
    
    tam = strlen(frase);
    
    for(i=0;i<tam;i++)
    {
        if( (frase[i] == 'a') ||(frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u') ||
            (frase[i] == 'A') ||(frase[i] == 'E') || (frase[i] == 'I') || (frase[i] == 'O') || (frase[i] == 'U')
        )
        {
            iVog++;
        }
    }
    
    printf("\nNumero de vogais da frase = %d\n\n", iVog);
    
    return 0;
    
}
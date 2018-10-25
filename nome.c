#include <stdio.h>

int main()
{
    char nome[20];
    
    printf("\nEntre com o nome:");
    //scanf("%s", nome);
    gets(nome);
    
    printf("\nBoa noite %s", nome);
    
    return 0;
}
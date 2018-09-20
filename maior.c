#include <stdio.h>

int main()
{
    float nota, maior, menor, soma=0, media;
    int i;
    
    //inicializa maior com valor baixo
    maior = -1; menor = 9999;
    
    for(i=0;i<5;i++)
    {
        printf("\nEntre com a nota %d: ", i+1);
        scanf("%f", &nota);
        
        if(nota>maior)
        {
            maior = nota;
        }
        
        if(nota<menor)
        {
            menor = nota;
        }
        soma = soma + nota; //acumula todas as notas
    }
    
    media = soma / i;
    
    printf("\n\nMaior nota lida = %.2f", maior);
    printf("\n\nMenor nota lida = %.2f", menor);
    printf("\n\nMedia da turma = %.2f\n\n", media);
    
    return 0;
}
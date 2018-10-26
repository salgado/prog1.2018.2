#include <stdio.h>

int main()
{
    float notas[10], aux;
    int i, j;
    
    for(i=0;i<10;i++)
    {
        printf("\nEntre com a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    //ordenar metodo bolha
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(notas[j] < notas[i]) //troca
            {
                aux = notas[j];
                notas[j]= notas[i];
                notas[i] = aux; 
            }
        }
    }
    
    //imprimir vetor
    for(i=0;i<10;i++)
    {
        printf("\n%d.-Nota = %f: ", i+1, notas[i]);
    }

    return 0;
}
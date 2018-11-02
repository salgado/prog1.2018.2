#include <stdio.h>

int main()
{
    float notas[4][3], media, av1, av2,av3;
    int i,j;
    int matricula;
    
    //ler notas
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEntre com a av%d do aluno %d: ", j+1, i+1 );
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }
    
    //imprimir relatorio de alunos
    printf("\nRelatório de Alunos");
    printf("\n============================================");
    printf("\nMat\tAV1\tAV2\tAV3");
    printf("\n============================================");
    
    for(i=0;i<4;i++)
    {
        printf("\n%d\t%.2f\t%.2f\t%.2f", i, notas[i][0], notas[i][1], 
                                                      notas[i][2]);
    }
    
    //buscar notas
    printf("\nEntre com a matricula de consulta:");
    scanf("%d", &matricula);
    
    //imprimir relatorio de alunos
    printf("\nRelatório de Alunos");
    printf("\n============================================");
    printf("\nMat\tAV1\tAV2\tAV3");
    printf("\n============================================");
    
    i=matricula;
    printf("\n%d\t%.2f\t%.2f\t%.2f", i, notas[i][0], notas[i][1], 
                                                      notas[i][2]);
    //calcular media
    av1 = notas[i][0];
    av2 = notas[i][1];
    av3 = notas[i][2];
    
    if( (av1 < av2 ) && (av1 < av3 ))
    {
        media = ( av2 + av3 ) / 2;
    }
    else if( av2 < av3)
    {
        media = ( av1 + av3 ) / 2;
    }
    else
    {
        media = ( av1 + av2 ) / 2;
    }
    printf("\nMedia = %.2f", media);
    
    printf("\n\n");
    return 0;
}
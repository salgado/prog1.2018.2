#include <stdio.h>

int main()
{
    float cand1, cand2, total;
    
    printf("\nEntre com votos candidato 1:");
    scanf("%f", &cand1);
    
    printf("\nEntre com votos candidato 2:");
    scanf("%f", &cand2);
    
    total = cand1 + cand2;
    
    printf("\nPercentual de votos do candidato1: %.2f", cand1/total*100);
    printf("\nPercentual de votos do candidato2: %.2f", cand2/total*100);
    
    if(cand1>cand2)
        printf("\nCandidato 1 Venceu as eleições com %.2f%%", cand1/total*100 );
    else if(cand2>cand1)
        printf("\nCandidato 2 Venceu as eleições com %.2f%%", cand2/total*100 );
    else
        printf("\nEleções empatadas!");
        
    return 0;    
    
}
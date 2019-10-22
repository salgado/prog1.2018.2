#include <stdio.h>

int main()
{
    int n1, n2,n3;
    float resultado;
    
    printf("\nEntre com n1:");
    scanf("%d", &n1);
    scanf("%d", &n3);
    printf("\nEntre com n2:");
    scanf("%d", &n2);
    
    resultado = n1+n2;
    
    printf("\nSoma = %.0f\n", resultado);
    
    resultado = n1-n2;
    printf("\nSubtração = %.0f\n", resultado);
    
    /*  comentario de bloco
    */
    resultado = n1*n2;
    printf("\nMultiplicação = %.0f\n", resultado);
    
    //imprime resultado
    resultado = (float)n1/n2;
    printf("\nDivisão = %.2f\n", resultado);
    
    return 0;
}

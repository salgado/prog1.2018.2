#include <stdio.h>

int main()
{
    int n1, n2;
    int resto;
    
    printf("\nEntre com n1:");
    scanf("%d", &n1);
    
    printf("\nEntre com n2:");
    scanf("%d", &n2);
    
    resto = n1 % n2;
    
    printf("\nResto da divisão de %d por %d = %d", n1,n2,resto);
    
    return 0;
}
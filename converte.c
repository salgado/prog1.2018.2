#include <stdio.h>

int main()
{
    float celsius, fahr;
    
    printf("\nEntre com grau Celsius:");
    scanf("%f", &celsius);
    
    fahr = 1.8*celsius + 32;
    
    printf("\nConvertido para Fahreinheit = %.2f", fahr);
    
    return 0;
}
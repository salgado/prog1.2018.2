#include <stdio.h>

int main()
{
    float sal_bruto, sal_liq, desconto;
    
    printf("\nEntre com o salario bruto: ");
    scanf("%f", &sal_bruto);
    
    if(sal_bruto <= 1500)
        desconto = sal_bruto * 0.05;
    else if(sal_bruto <= 3500)
        desconto = sal_bruto * 0.10;
    else
        desconto = sal_bruto * 0.15;
    
    sal_liq = sal_bruto - desconto;
    
    printf ("\nSalário Líquido = %.2f \n\n", sal_liq);
    
    return 0;
    
}
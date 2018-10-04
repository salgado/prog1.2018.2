#include <stdio.h>

int main()
{
    int n1, n2, fib;
    int num, i;
    
    n1=0;
    n2=1;
    
    printf("\nEntre com o valor de n:");
    scanf("%d", &num);
    
    printf("0, ");
    
    if(num>=2)
        printf("1, ");
        
    for(i=3; i<=num; i++)
    {
        fib = n1 + n2;
        n1=n2;
        n2=fib;
        
        printf("%d, ", fib);
    }
 
    printf("\n\n");
    return 0;
}
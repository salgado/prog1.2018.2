#include <stdio.h>

int main()
{
    int opcao, num1, num2, resposta;
    float result;
    
    do{
        //imprime menu
        printf("\nQual operacao deseja?");
        printf("\n-----------------------");
        printf("\n1-Adicao");
        printf("\n2-Subtracao");
        printf("\n3-Multiplicacao");
        printf("\n4-Divisao");
        printf("\nOpção:");
        scanf("%d", &opcao);
        
        //ler num1 e num2
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        printf("\nEntre com num2:");
        scanf("%d", &num2);
        
        //fazer operacao matematica
        switch(opcao)
        {
           case 1: //adicao
              result = num1 + num2;
              printf("\n\nResultado : %d + %d = %.2f", num1, num2, result);
              break;          
           case 2: //subtracao
              result = num1 - num2;
              printf("\n\nResultado : %d - %d = %.2f", num1, num2, result);
              break;          
           case 3: //multiplicacao
              result = num1 * num2;
              printf("\n\nResultado : %d * %d = %.2f", num1, num2, result);
              break;          
           case 4: //divisao
              result = (float) num1 / num2;
              printf("\n\nResultado : %d / %d = %.2f", num1, num2, result);
              break;          
        }
        
        printf("\n\nDeseja continuar?(1-s/2-n):");
        scanf("%d", &resposta);
        
        
    }while(resposta==1);
    
    printf("\nTchau!!!\n");
    system("pause");
    
    return 0;
    
}

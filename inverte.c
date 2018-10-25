#include <stdio.h>

int main()
{
   char palavra[30];
   int i, tam;
   
   printf("\nEntre com a palavra:");
   gets(palavra);
   
   tam = strlen(palavra);
   
   for(i=(tam-1);i>=0;i--)
   {
       printf("%c", palavra[i]);
   }

   printf("\n\n");
   
   //imprimir em caixa alta
   for(i=0;i<tam;i++)
   {
       if((palavra[i]>=65) && (palavra[i]<=90))
       {
            printf("%c", palavra[i]);    
       }
       else
       {
           printf("%c", palavra[i]-32);
       }
       
   }
   
   printf("\n\n");
   
   return 0;
}
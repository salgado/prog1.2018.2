#include <stdio.h>

int main()
{
  int idade;
  
  printf("\nEntre com a sua idade:");
  scanf("%d", &idade);

  if(idade >= 18 )
  {
     printf("\nVocê pode dirigir\n");
  }
  else
  { 
     printf("\nVocê NÂO PODE dirigir!!\n");
  }

  return 0;
}

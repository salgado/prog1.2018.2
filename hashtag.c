#include <stdio.h>
#include <string.h>

int main()
{
    char tweet[140];
    int cont=0, i, tam;
    
    printf("\nEntre com um tweet:");
    gets(tweet);
    
    //contar hashtag
    tam=strlen(tweet);
    for(i=0;i<tam;i++)
    {
        if(tweet[i] == '#') 
            cont++;
    }
    
    printf("\nEste tweet contem %d hashtags.", cont);
    
    return 0;
}
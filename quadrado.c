#include <stdio.h>

int main()
{
    int i, j, tam;
    
    printf("\nentre com o tam do quadrado: ");
    scanf("%d", &tam);
    
    for(i=1;i<=tam;i++){
        for(j=1;j<=tam;j++)
        {
            if(i==1 || i==tam) 
                printf("#");
            else if(j==1 || j==tam)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

In your terminal, create a demo project that replicates these steps:

git init demo (cd into it)
touch readme.md
git add readme.md
git reset readme.md
git add readme.md (to get it back in the staging area)
git commit -m ‘commit empty readme’
Take a screenshot of your terminal and post to the Education Community.


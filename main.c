#include <stdio.h>
#include "fonction.h"



int main()
{int x,y,c;
    do
    {
    printf("saisir x et y\n");
    scanf("%d%d",&x,&y);
    } while (x<0 && y<0 || x==y);
    c=max(x,y);
    printf("le plus grand entier est %d\n",c);
    return 0;    
}
    
    

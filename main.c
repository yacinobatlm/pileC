#include <stdio.h>
#include "pile.h"
int main()
{
    Pile p;
    p = newPile();
    printf("\n%d\n",topPile(p));
    printPile(p);
    p = pushPile(p,10);
    p = pushPile(p,20);
    p = pushPile(p,0);
    p = pushPile(p,40);
    printPile(p);
    printf("\n%d\n",topPile(p));
    return 0;
}

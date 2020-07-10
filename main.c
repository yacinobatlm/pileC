#include <stdio.h>
#include "pile.h"
int main()
{
    Pile p;
    p = newPile();
    int n;
    int* t = pushData(&n);
    p = pushDataPile(p, t, n);
    printf("--------------------");
    printPile(p);
    /*printPile(p);
    p = pushPile(p,10);
    p = pushPile(p,20);
    p = pushPile(p,0);
    p = pushPile(p,40);
    printPile(p);
    printf("-------------\n");
    p = clearPile(p);
    printPile(p);*/
    return 0;
}

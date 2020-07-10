#include <stdio.h>
#include <stdlib.h>
/*---------------------------Declaration d'une pile--------------------------------*/

typedef struct pile
{
    int donnee;
    struct pile *next;
}SPile, *Pile;

/*---------------------------Initialiser une pile par NULL--------------------------------*/

Pile newPile()
{
    return NULL;
}

/*---------------------------La pile est vide?--------------------------------*/

int isEmptyPile(Pile p)
{
    if(p == NULL)
        return 1;
    return 0;
}

/*---------------------------Crée une variable de type pile--------------------------------*/

Pile pushPile(Pile p, int x)
{
    Pile newPile = (Pile)malloc(sizeof(SPile));
    newPile->donnee = x;
    newPile->next = p;
    return newPile;
}

/*---------------------------Retourner le sommet de la pile--------------------------------*/

int topPile(Pile p)
{
    if (isEmptyPile(p))
        return -1; //il retourne rien mais on suppose que nos données est des nombres positif 
    return p->donnee;
}

/*---------------------------Crée une variable de type pile--------------------------------*/


void printPile(Pile p)
{
    if(isEmptyPile(p))
    {
        printf("\nLa pile est vide, Rien afficher\n");
        return ;
    }
    while (!isEmptyPile(p))
    {
        printf("%d\n",p->donnee);
        p = p->next;
    }
}

/*---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*/
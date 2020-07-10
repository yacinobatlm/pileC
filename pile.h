#include <stdio.h>
#include <stdlib.h>

int numberOfElement;

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

/*---------------------------Crée un tableau dinamique pour remplire les données--------------------------------*/

int* pushData(int* numberOfElement)
{
    printf("Entrer la taille de tableau: ");
    scanf("%d",numberOfElement);
    int* t = (int*)malloc(*numberOfElement * sizeof(int));
    for (int i = 0; i < *numberOfElement; i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",t + i);
    }
    return t;
}

/*---------------------------pile--------------------------------*/

Pile pushDataPile(Pile p ,int* t, int numberOfElement)
{
    for (int i = 0; i < numberOfElement; i++)
    {
        p = pushPile(p, *(t + i));
    }
    return p;
}

/*---------------------------Afficher la pile--------------------------------*/


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

/*---------------------------Retourner le sommet de la pile--------------------------------*/

int topPile(Pile p)
{
    if (isEmptyPile(p))
        return -1; //il retourne rien mais on suppose que nos données est des nombres positif 
    return p->donnee;
}

/*---------------------------Vider le sommet de la Pile--------------------------------*/
Pile popPile(Pile p)
{
    Pile tmp = newPile();
    tmp = p->next;
    free(p);
    p = tmp;
    return p;
}

/*---------------------------Vider la Pile--------------------------------*/

Pile clearPile(Pile p)
{
    if(isEmptyPile(p))
        return newPile();
    p = popPile(p);
    return clearPile(p);
}

/*---------------------------------------------------------------------*/
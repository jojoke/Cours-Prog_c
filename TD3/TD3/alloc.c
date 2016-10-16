#include "alloc.h"

struct matrice allouer_matrice(int parNbLine, int parNbCol)
{
     struct matrice varM;
     varM.nb_ligne = parNbLine;
     varM.nb_colonne = parNbCol;

     int i;
     varM.m = calloc(varM.nb_ligne, sizeof(int));
     for (i = 0; i < varM.nb_colonne; ++i)
     {
          varM.m[i] = malloc(sizeof(int));
     }
     return varM;
}

void detruire_matrice(struct matrice parM)
{
     int i,j;
     int* p;
     for ( i = 0; i < parM.nb_ligne; i++)
     {
          for ( j = 0; j < parM.nb_colonne; j++)
          {
               p = &parM.m[i][j];
               free(p);
          }
     }
}

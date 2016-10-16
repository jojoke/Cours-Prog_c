#include "alloc.h"

struct matrice allouer_matrice(int parNbLine, int parNbCol)
{
     struct matrice varM;
     varM.nb_ligne = parNbLine;
     varM.nb_colonne = parNbCol;

     int i;
     varM.m = (int**)calloc(varM.nb_ligne, sizeof(int));
     for (i = 0; i < varM.nb_ligne; ++i)
     {
          varM.m[i] =(int*) calloc(varM.nb_colonne,sizeof(int));
     }
     return varM;
}

void detruire_matrice(struct matrice *parM)
{
     int i,j;
     int* p;
     for ( i = 0; i < parM->nb_ligne; i++)
     {
          
               free(parM->m[i]);
               
         
     }
}

#include "matrice_io.h"

struct matrice read_matrice(FILE* parP)
{
     int i,j;
     struct matrice varM;
     fscanf(parP,"%d %d",&i,&j);
     varM = allouer_matrice(i,j);

     for (i = 0; i < varM.nb_ligne; i++)
     {
          for (j = 0; j < varM.nb_colonne; j++) {
               fscanf(parP, "%d ", &varM.m[i][j]);
          }
     }
     return varM;
}

void write_matrice(FILE* parP, struct matrice parM)
{
     int i,j;
     fprintf(parP,"%d %d\n",parM.nb_ligne,parM.nb_colonne);
     for (i = 0; i < parM.nb_ligne; i++)
     {
          for (j = 0; j < parM.nb_colonne; j++) {
               fprintf(parP, "%d ", &varM.m[i][j]);
          }
          fprintf(parP,"\n");
     }
}

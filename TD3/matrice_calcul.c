#include "matrice_calcul.h"

struct matrice add_matrice( struct matrice m1, struct matrice m2)
{
     int i,j;
     struct matrice varM;
     if(m1.nb_ligne == m2.nb_ligne && m2.nb_colonne ==m1.nb_colonne)
     {
     	i = m1.nb_ligne;
     	j = m1.nb_colonne;
     	varM = allouer_matrice(i,j);
     	for (i = 0; i < m1.nb_ligne; i++)
     	{
          for (j = 0; j < m1.nb_colonne; j++) 
	      {
               varM.m[i][j] =  m1.m[i][j] + m2.m[i][j];
              }
     	}
     }
     else
     {
        printf("addition impossible ! \n");
        varM = allouer_matrice(0,0);
      }
     return varM;
}

struct matrice multiply_matrice(struct matrice m1, struct matrice m2)
{
     int i,j,k;
     struct matrice varM;
     if(m2.nb_ligne == m1.nb_colonne)
     {
      i = m1.nb_ligne;
      j = m2.nb_colonne;
      varM = allouer_matrice(i,j);
      for (i = 0; i < m1.nb_ligne; i++)
      {
          for (j = 0; j < m2.nb_colonne; j++) {
		varM.m[i][j] =0;
               for(k = 0; k < m1.nb_colonne; k++)
		{
			varM.m[i][j] +=  m1.m[i][k]*m2.m[k][j];
		}
          }
      }
     }
     else
     {
       varM=allouer_matrice(0,0);
       printf("multiplication impossible!\n");
     }
     return varM;

}



#ifndef _MATRICE_IO_H
#define _MATRICE_IO_H

#include <stdio.h>
#include <stdlib.h>
#include "alloc.h"

struct matrice
{
     int**     m;
     int       nb_ligne;
     int       nb_colonne;
} ;

struct matrice read_matrice(FILE* parP);
void write_matrice(FILE* parP, struct matrice parM);

#endif

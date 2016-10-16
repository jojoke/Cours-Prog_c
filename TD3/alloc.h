#ifndef _ALLOC_H
#define _ALLOC_H

#include "matrice_io.h"

struct matrice allouer_matrice(int parNbLine, int parNbCol);
void detruire_matrice(struct matrice * parM);

#endif

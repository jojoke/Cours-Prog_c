#include "matrice_io.h"
#include "matrice_calcul.h"
#include "alloc.h"

int main(int argc, char const *argv[])
{
     FILE * matriceIn;
     FILE * matriceOut;
     struct matrice m1;

     matriceIn = fopen("in.txt", "r");
     matriceOut = fopen("out.txt", "w");

     m1 = read_matrice(matriceIn);
     printf("%d\n", m1.m[1][1]);

     return 0;
}

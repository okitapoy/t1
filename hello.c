#include <stdio.h>

int main(int argc, char **argv){

   int nbrArgs = argc - 1;

   if(nbrArgs != 1){

   printf("Erreur : Un seul argument permis\n");

   }else{

   printf("Hello %s!\n ",argv[1]);

   }


    return 0;


}

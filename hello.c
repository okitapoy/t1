#include <stdio.h>

void  boucleAvant(int borne){
   int i = 0;
   for(i ; i < borne; ++i){
   printf("%d\n",i);
   }
}

void  boucleApres(int borne){
   int i = 0;
   for(i ; i < borne; i++){
   printf("%d\n",i);
   }

}



int main(int argc, char **argv){

   int nbrArgs = argc - 1;

   if(nbrArgs != 1){

   printf("Erreur : Un seul argument permis\n");

   }else{

   printf("Hello %s!\n ca va bien %s\n ",argv[1], argv[1]);

   }


   boucleApres(5);

    return 0;


}

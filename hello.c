#include <stdio.h>

int main(int argc, char **argv){



     printf("%d\n",argc);


    int i =1;
    for(i;i < argc;i++){
      printf("%s\n",argv[i]);

    }


    return 0;


}

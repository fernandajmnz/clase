#include <stdio.h>

int main(int argc, char **argv ){

    printf("Hola mundo %s \n", argv [1]);
    int i;
    for (int i =1;i < argc; i ++){
        printf("Hola mundo %s ", argv[i]);
    }
    return 0;
}
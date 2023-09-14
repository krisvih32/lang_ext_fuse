#include "getargs.h"
#include "parser.h"
#include <stdio.h>
int main(int argc, char *argv[]){
    printf("in main");
    int *error = NULL;
    int args = getargs(argc, argv, &error);
    printf("%d", args);
    // parser(args);
}
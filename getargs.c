#include <stdlib.h>
#include <stdio.h>
#include "read.h"
#include <sys/stat.h>
#include <ctype.h>
int getargs(int argc, char *argv[], int **error) {
    
    int *e=malloc(sizeof(int)*argc);
    *error = e;
    printf("in getargs");
    //Initializing array
    for (int i = 0; i < argc; i++) {
        e[i] = 0; // Example initialization of the error array
    }
    switch (argc) {
        case 1:{    
            system("python3 error.py");
            printf("no files \n"); 
            e[0]=1;
        }
        case 3:{
	        printf("case 3 %d\n",argc);
            
            int copy_argc=argc - 1;
            int error;
            while (copy_argc!=1){
                error = 0;
                printf("%s index\n%d argc\n", argv[copy_argc], copy_argc);
                char *data = read(64000/sizeof(char), argv[copy_argc], "r", &error);
                printf("data %s\n",data);
                if (error==14){
                    printf("%d\n", error);
                    system("python3 error.py");
                    printf("no such file or directory: \'%s\'\n", argv[copy_argc]);
                }
                copy_argc--;
            }
        }
        default:{
	        printf("default\n");
            int copy_argc=0;
            int error;
            while (copy_argc<=argc){
                printf("%s index\n%d argc\n", argv[copy_argc], copy_argc);
                struct stat info={};
                stat(argv[copy_argc], &info);
                printf("info.st_size %lld\n",info.st_size);
                char* data = read(info.st_size + 1, argv[copy_argc], "r", &error);
                // char* ret="";
                for (int i=0;i<info.st_size; i++) {
                    // if (isalnum(data[i])) {
                    // //     ret+=data[i];
                    // }
                }
                printf("\n");
                free(data);
                printf("%d", error);
                // *error[copy_argc]=error;
                copy_argc++;;
                return 0;
            }
        }

    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "read.c"
#include <sys/stat.h>
int main(int argc, char *argv[]) {

    printf("main\n");


    printf("main args done\n");
    switch (argc) {
        case 1:{    
            system("python3 error.py");
            printf("no files \n"); 
            return 1;
        }
        case 3:{
	        printf("case 3 %d\n",argc);
            
            int copy_argc=argc - 1;
            int error;
            while (copy_argc!=1){
                error = 0;
                printf("%s index\n%d argc\n", argv[copy_argc], copy_argc);
		struct stat info;
		stat(argv[copy_argc], &info)
                char *data = read((info.)/sizeof(char), argv[copy_argc], "r", &error);
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
            int copy_argc=argc - 1;
            int error;
            while (copy_argc!=0){
                error = 0;
                printf("%s index\n%d argc\n", argv[copy_argc], copy_argc);
                char* data = read((info.st_size*8)/sizeof(char), argv[copy_argc], "r", &error);
                printf("%s\n", data);
                free(data);
                if (error==ENOENT){
                    printf("%d\n", error);
                    system("python3 error.py");
                    printf("no such file or directory: \'%s\'\n", argv[copy_argc]);
                }
                copy_argc--;
            }
        }

    }
    while ( *argv ) printf( "%s\n", *argv++ );

    return 0;
} 

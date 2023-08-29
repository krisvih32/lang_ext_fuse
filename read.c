#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


char* read(int buffer_size, char *filename, char *mode, int *error_ptr) {
    char* buffer=malloc(buffer_size*sizeof(char));
    char *cur = buffer;
	printf("In read %s\n",filename);
	FILE *fp=fopen(filename, mode);
    printf("opened file %s %d\n",filename,errno);
    if (error_ptr != NULL) {
        *error_ptr = errno;
        printf("set error %s %d\n",filename,errno);
    }
    bool ret=true;
    if (fp==NULL){
        ret = false;
    }
    if (ret==true){
        fread(cur, sizeof(char), buffer_size, fp);
        fclose(fp);
    }
    return buffer;
}
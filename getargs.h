#ifndef __HEADER_GUARD_GETARGS_H__
#define __HEADER_GUARD_GETARGS_H__
#include "getargs.c"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "read.c"
#include <sys/stat.h>
int getargs(int argc, char *argv[], int **error);
#endif //__HEADER_GUARD_GETARGS_H__

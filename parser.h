#ifndef __HEADER_GUARD_PARSER_H__
#define __HEADER_GUARD_PARSER_H__
#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h" 
//long
char* c_long(long num);
//long long
char* c_long_long(long long num);
//int8_t
char* c_int8_t(int8_t num);
//int16_t
char* c_int16_t(int16_t num);
//int32_t
char* c_int32_t(int32_t num);
//int64_t
char* c_int64_t(int64_t num);
char* parser(char* code);
#endif//__HEADER_GUARD_PARSER_H__

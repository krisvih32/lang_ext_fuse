#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h" 
//c Integer types: int, short, long, long long, uintN_t, intN_t, uint_fastN_t, int_fastN_t, uint_leastN_t, int_leastN_t
//int
char* c_int(int num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_int");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//short
char* c_short(short num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_short");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//long
char* c_long(long num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_long");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//long long
char* c_long_long(long long num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_long_long");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//int8_t
char* c_int8_t(int8_t num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_int8_t");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//int16_t
char* c_int16_t(int16_t num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_int16_t");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//int32_t
char* c_int32_t(int32_t num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_int32_t");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
//int64_t
char* c_int64_t(int64_t num){
    cJSON *json=cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "value", num);
    cJSON_AddStringToObject(json, "type", "c_int64_t");
    char* ret=cJSON_Print(json);
    cJSON_Delete(json);
    return ret;
}
char* parser(char* code){
    return c_int(atoi(code));
}
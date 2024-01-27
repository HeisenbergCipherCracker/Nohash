#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include <time.h>
#include "typedefs.h"
#include <pthread.h>

const char* ERROR_SIGN = "\x1b[31m[ERROR]%s\x1b[0m\n";
const char* DEBUG_SIGN = "[DEBUG]";
const char* WARNING_SIGN = "[WARNING]";
const char* CRITICAL_SIGN = "[CRITICAL]";
const char* INFO_SIGN = "\x1b[32m[INFO]%s\x1b[0m\n";

void print_error_msg(const char* msg){
    printf(ERROR_SIGN, msg);
}

void print_inf_message(const char* msg){
    printf(msg,INFO_SIGN);
}

void print_debug_msg(const char* msg){
    printf(DEBUG_SIGN,msg);
}

void print_warning_msg(const char* msg){
    printf(WARNING_SIGN,msg);
}


void print_critical_msg(const char* msg){
    printf(CRITICAL_SIGN,msg);
}

void print_time_console(){
    time_t now = time(0);
    char* dt = ctime(&now);
    printf("%s", dt);
}
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include <time.h>
#include "typedefs.h"
#include <pthread.h>
#include "typedefs.h"
#include <unistd.h>
//defining log messages
const char* ERROR_SIGN = "\x1b[31m[ERROR]%s\x1b[0m\n";
const char* DEBUG_SIGN = "\x1b[34m[DEBUG]\x1b[0m";
const char* WARNING_SIGN = "\x1b[33m[WARNING]\x1b[0m";
const char* CRITICAL_SIGN = "[CRITICAL]";
const char* INFO_SIGN = "\x1b[32m[INFO]%s\x1b[0m\n";
//eof

//defining filesystem settings
const char* setoutput_file = "";

WDIRDefines getcwd(){
    WDIRDefines retval;
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        retval.str_workdir = cwd;
        return retval;
    } else {
        perror("getcwd() error");
        exit(1);
    }
}
//eof
//defining log functions

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
//eof


//defining time settings

void print_time_console(){
    time_t now = time(0);
    char* dt = ctime(&now);
    printf("%s", dt);
}

//eof

//defining colors for console output
void print_black_string(const char* msg){
    printf("\x1b[30m%s\x1b[0m", msg);
}

void print_red_string(const char* msg){
    printf("\x1b[31m%s\x1b[0m", msg);
}

void print_green_string(const char* msg){
    printf("\x1b[32m%s\x1b[0m", msg);
}

void print_yellow_string(const char* msg){
    printf("\x1b[33m%s\x1b[0m", msg);
}

void print_blue_string(const char* msg){
    printf("\x1b[34m%s\x1b[0m", msg);
}

void print_magenta_string(const char* msg){
    printf("\x1b[35m%s\x1b[0m", msg);
}

void print_cyan_string(const char* msg){
    printf("\x1b[36m%s\x1b[0m", msg);
}

//eof
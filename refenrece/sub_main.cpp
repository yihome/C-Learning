#include <iostream>
#include <fcntl.h>
#include <sys/dtrace.h>
#include "apue.h"

#define RWRWRW (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

int main() {
    umask(0);
    if (creat("foo", RWRWRW) < 0)
        err_sys("creat error for foo");
    umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    if (creat("bar", RWRWRW) < 0)
        err_sys("creat error for bar");
    exit(0);

}

uint32_t crc_32(unsigned char* buf,uint32_t len){
    uint32_t crc =  0xffffffff;
    while(len-- > 0) {
        uint32_t current = (uint32_t)(buf) & 0x000000ff;

        u_int count = len - 32;

    }
}
#include "apue.h"
#include "io_utils.h"

int main(void) {
    PRINTLNF("uid = %d, gid = %d", getuid(), getgid());
    exit(0);
}
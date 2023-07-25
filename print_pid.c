#include "apue.h"
#include "io_utils.h"

int main(void) {
    PRINTLNF("hello world from process ID %ld\n", (long) getpid());
    exit(0);
}
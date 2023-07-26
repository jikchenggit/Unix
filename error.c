#include "apue.h"
#include "string.h"
#include "io_utils.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
    for (int i = 0; i < 200; ++i) {
        if (strerror(i) == "Unknown error")
            break;
        else
            PRINTLNF("%d %s", i, strerror(i));
    }
    exit(0);
}

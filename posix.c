#include <bits/xopen_lim.h>
#include <bits/posix1_lim.h>
#include <bits/posix2_lim.h>
#include <bits/posix_opt.h>
#include "stdlib.h"
#include "io_utils.h"
#include "limits.h"
void main(){
    // numeric restriction class
    PRINT_INT(LONG_BIT);
    PRINT_INT(SSIZE_MAX);
    PRINT_INT(WORD_BIT);
    // minimum
    PRINT_INT(_POSIX_ARG_MAX);
    PRINT_INT(_POSIX_CHILD_MAX);
    PRINT_INT(_POSIX_DELAYTIMER_MAX);
    PRINT_INT(_POSIX_HOST_NAME_MAX);
    PRINT_INT(_POSIX_LINK_MAX);
    PRINT_INT(_POSIX_LOGIN_NAME_MAX);
    PRINT_INT(_POSIX_MAX_CANON);
    PRINT_INT(_POSIX_MAX_INPUT);
    PRINT_INT(_POSIX_NAME_MAX);
    PRINT_INT(_POSIX_NGROUPS_MAX);
    PRINT_INT(_POSIX_OPEN_MAX);
    PRINT_INT(_POSIX_PATH_MAX);
    PRINT_INT(_POSIX_PIPE_BUF);
    PRINT_INT(_POSIX_RE_DUP_MAX);
    PRINT_INT(_POSIX_RTSIG_MAX);
    PRINT_INT(_POSIX_SEM_NSEMS_MAX);
    PRINT_INT(_POSIX_SEM_VALUE_MAX);
    PRINT_INT(_POSIX_SIGQUEUE_MAX);
    PRINT_INT(_POSIX_SSIZE_MAX);
    PRINT_INT(_POSIX_STREAM_MAX);
    PRINT_INT(_POSIX_SYMLINK_MAX);
    PRINT_INT(_POSIX_SYMLOOP_MAX);
    PRINT_INT(_POSIX_TIMER_MAX);
    PRINT_INT(_POSIX_TTY_NAME_MAX);
    PRINT_INT(_POSIX_TZNAME_MAX);
    // runtime
    PRINT_INT(CHARCLASS_NAME_MAX);
    PRINT_INT(COLL_WEIGHTS_MAX);
    PRINT_INT(LINE_MAX);
    PRINT_INT(NGROUPS_MAX);
    PRINT_INT(RE_DUP_MAX);
    exit(0);
}
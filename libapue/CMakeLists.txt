cmake_minimum_required(VERSION 3.20)
project(apue C)
set(CMAKE_C_STANDARD 11)
aux_source_directory(. LIB_SRCS)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
add_library(apue STATIC  bufargs.c
apue.h
cliconn.c
clrfl.c
daemonize.c
error.c
errorlog.c
lockreg.c
locktest.c
nspipe.c
openmax.c
Orecvfd.c
pathalloc.c
popen.c
prexit.c
prmask.c
ptyfork.c
ptyopen.c
readn.c
recvfd.c
semaph.c
senderr.c
sendfd.c
servaccept.c
servlisten.c
setfd.c
setfl.c
signal.c
signalintr.c
sleep.c
sleepus.c
spipe.c
tellwait.c
ttymodes.c
writen.c
)


CC ?= clang
BINNAME = 0000-unlockme

ARCH ?= 32
TARGET ?= linux

CFLAGS = -O0 -W -Wall -Wextra -no-pie -fno-pic -m${ARCH}

all:
	${CC} ${CFLAGS} -o ${BINNAME} ${BINNAME}.c
	

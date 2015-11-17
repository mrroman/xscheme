LDFLAGS=-lm
CFLAGS=-DUNIX
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: $(OBJS)
	cc -o xscheme $(OBJS) $(LDFLAGS)

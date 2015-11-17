LDFLAGS=-lm
CFLAGS=-DUNIX -D__STDC__
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: $(OBJS)
	cc -o xscheme $(OBJS) $(LDFLAGS)

clean:
	rm $(OBJS) xscheme

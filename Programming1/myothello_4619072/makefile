EXE = myothello

SRCS = \
myothello.c \
view_othello.c

OBJS = $(SRCS:.c=.o)
CC = gcc
#CC = clang

CFLAGS=-I/usr/X11R6/include -Wall
LDFLAGS=-L/usr/X11R6/lib
LDLIBS=-lX11

$(EXE):$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS)  -o $@ $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f *~

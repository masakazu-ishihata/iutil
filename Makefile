# Makefile
TAR = test
CC = gcc -O6 -Wall
L = -lm
OBJS = main.o iutil.o
SHAD = -fPIC -shared
LIB = libiutil.so

all : $(TAR)
$(TAR): $(OBJS)
	$(CC) -o $@ $(OBJS) $(L)
clean:
	rm -f $(OBJS) $(TAR) $(LIB) *~ *.bak

.c.o:	$(CC) -c $<

lib:
	$(CC) $(SHAD) -o $(LIB) iutil.c $(L)

main.o: main.h iutil.h
iutil.o: iutil.h

CC = g++
STANDARD = c++11
CFLAGS = -std=c++11 -o
OBJS = Keylogger.o

all: main

main: Keylogger.o
	$(CC) $(CFLAGS) main Keylogger.o -lncurses

Keylogger.o: Keylogger.cpp
	$(CC) -c -std=$(STANDARD) Keylogger.cpp

clean:
	\rm -f $(OBJS) main *~

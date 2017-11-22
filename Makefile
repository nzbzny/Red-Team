CC = g++
CFLAGS = -std=c++11 -o
OBJS = Keylogger.o

all: main

main:
	$(CC) $(CFLAGS) main Keylogger.cpp -lncurses

Keylogger.o: Keylogger.cpp
	$(CC) -c $(CFLAGS) Keylogger.o

clean:
	\rm -f $(OBJS) main *~

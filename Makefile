CC = g++
BIN = -o bin/
SOURCEDIR = ./src
SRC := $(shell find $(SOURCEDIR) -name '*.cpp' -not -name 'message_term.cpp')
H = $(wildcard *.h)
CFLAGS = -std=c++11

main: $(SRC) $(H)
	$(CC) $(BIN)$@ $(SOURCEDIR)/message_term.cpp $(SRC) $(CFLAGS)

handler: $(SRC) $(H)
	$(CC) $(BIN)$@ $(SRC) $(CFLAGS)

message: $(SRC) $(H)
	$(CC) $(BIN)$@ $(SRC) $(CFLAGS)
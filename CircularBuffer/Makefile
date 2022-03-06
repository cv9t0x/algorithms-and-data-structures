CXX=g++
CXXFLAGS=-c -Wall --std=c++11

DEBUG=

ifeq ($(OS), Windows_NT)
	RM := del
	BINARY := main.exe
else
	RM := rm
	BINARY := ./main
endif

all: main

debug: DEBUG = -g
debug: main

main: main.o CircularBuffer.o
	${CXX} main.o CircularBuffer.o -o ${BINARY}

main.o: main.cpp
	${CXX} ${CXXFLAGS} main.cpp

Math.o: CircularBuffer.cpp
	${CXX} ${CXXFLAGS} CircularBuffer.h CircularBuffer.cpp

clean:
	${RM} *.o *.gch

run: all
	${BINARY}
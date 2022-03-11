CXX=g++
CXXFLAGS=-c -Wall --std=c++11

FILENAME=test.txt
N=10

DEBUG=

ifeq ($(OS), Windows_NT)
	RM := del
	FIRST := first.exe
	SECOND := second.exe
else
	RM := rm
	FIRST := ./first
	SECOND := ./second
endif

all: first second

debug: DEBUG = -g

first: first.o
	${CXX} first.o -o first
	${FIRST} ${N} ${FILENAME} 

second: second.o
	${CXX} second.o -o second
	${SECOND} ${FILENAME}

first.o: first.cpp
	${CXX} ${CXXFLAGS} first.cpp -o first.o

second.o: second.cpp
	${CXX} ${CXXFLAGS} second.cpp -o second.o

clean:
	${RM} *.o *.gch ${FIRST} ${SECOND} *.exe *.txt

run: all
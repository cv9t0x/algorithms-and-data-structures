CXX=g++
CXXFLAGS=-c -Wall --std=c++11

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
	${CXX} first.o -o ${FIRST}

second: second.o
	${CXX} second.o -o ${SECOND}

first.o: first.cpp
	${CXX} ${CXXFLAGS} first.cpp

second.o: second.cpp
	${CXX} ${CXXFLAGS} second.cpp

clean:
	${RM} *.o *.gch ${FIRST} ${SECOND} *.exe *.txt

run: all
	${FIRST} ${N} ${FILENAME}
	${SECOND} ${FILENAME}
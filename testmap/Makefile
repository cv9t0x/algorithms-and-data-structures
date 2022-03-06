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

main: main.o
	${CXX} main.o -o ${BINARY}

main.o: main.cpp
	${CXX} ${CXXFLAGS} main.cpp

clean:
	${RM} *.o *.txt  *.gch ${BINARY} *.exe

run: all
	${BINARY} > map.txt
	python3 main.py > dict.txt
	python3 graphic.py
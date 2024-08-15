CXX = g++
CXXFLAGS = -Wall -std=c++11

all: main

main: main.o FilaCircular.o
	$(CXX) $(CXXFLAGS) -o main main.o FilaCircular.o

main.o: main.cpp FilaCircular.h
	$(CXX) $(CXXFLAGS) -c main.cpp

FilaCircular.o: FilaCircular.cpp FilaCircular.h
	$(CXX) $(CXXFLAGS) -c FilaCircular.cpp

clean:
	rm -f *.o main

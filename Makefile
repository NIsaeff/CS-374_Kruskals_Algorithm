CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

all: kruskal

kruskal: main.o kruskal.o
	$(CXX) $(CXXFLAGS) -o kruskal main.o kruskal.o

main.o: main.cpp kruskal.h
	$(CXX) $(CXXFLAGS) -c main.cpp

kruskal.o: kruskal.cpp kruskal.h
	$(CXX) $(CXXFLAGS) -c kruskal.cpp

clean:
	rm -f *.o kruskal

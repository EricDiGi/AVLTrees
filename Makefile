CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: node

clean:
	rm -rf *.dSYM
	$(RM) *.o *.gc* test/*.o Hash core main

node: $(OBJECTS) testNode.cpp Node.hpp Node.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

bst: $(OBJECTS) testtree.cpp Node.hpp Node.cpp BSTree.hpp BSTree.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

avl: $(OBJECTS) testavl.cpp Node.hpp Node.cpp BSTree.hpp BSTree.cpp AVLTree.hpp AVLTree.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
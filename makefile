CXX = g++
CXXFLAGS = -Wall -g
INC = -I./source/

BSTTest: BSTTest.o BST.o
	$(CXX) $(CXXFLAGS) $(INC) -o BSTTest BSTTest.o BST.o

BSTTest.o: test/BSTTest.cxx source/BST.h
	$(CXX) $(CXXFLAGS) $(INC) -c test/BSTTest.cxx

BST.o: source/BST.cxx source/BST.h
	$(CXX) $(CXXFLAGS) $(INC) -c source/BST.cxx

Node.o: source/Node.cxx source/Node.h
	$(CXX) $(CXXFLAGS) $(INC) -c source/Node.cxx

clean:
	rm -rf BSTTest *.o

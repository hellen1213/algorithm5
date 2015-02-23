#include <stdlib.h>
#include <stdio.h>
#include "Course.cpp"

using namespace std;

class Graph{

	private:
		int n;
		int ** A;
	
	public:
		Graph(int size = 2);
		~Graph();
		bool isConnected(int, int);
		void addEdge(int x, int y);
		void BFS(int, int);

};

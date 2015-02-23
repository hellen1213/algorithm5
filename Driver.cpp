#include "Courses.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::vector;
using namespace std;

#define HEIGHT 11
#define WIDTH 11

int main()
{	
	Graph g(15);
	g.addEdge(1, 6);
	g.addEdge(2, 4);
	g.addEdge(3, 6);
	g.addEdge(3, 12);
	g.addEdge(4, 5);
	g.addEdge(4, 7);
	g.addEdge(4, 14);
	g.addEdge(5, 8);
	g.addEdge(6, 8);
	g.addEdge(6, 13);
	g.addEdge(6, 14);
	g.addEdge(7, 9);
	g.addEdge(8, 11);
	g.addEdge(9, 10);
	g.addEdge(14, 15);
	
	g.BFS(1, 15);

/*
http://programming-technique.blogspot.com/2012/07/breadth-first-search-in-c-algorithm-and.html

*/







return 0;
}

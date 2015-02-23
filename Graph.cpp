#include <Graph.h>

Graph::Graph(int size)
{
	int i, j;

	if(size < 2)
		n = 2;
	else
		n = size;

	A = new int* [n];

	for(i = 0; i< n; i++)
		A[i] = new int[n];
	for(i = 0; i < n; i++)
		for(j = 0; j< n; j++)
			A[i][j] = 0;
}

Graph::~Graph(){
	
	int i;
	for(i = 0; i<n; i++)
	delete[] A[i];
	delete[] A;

}

bool Graph::isConnected(int x, int y)
{
	return (A[x-1][y-1] == 1);
}

void Graph::addEdge(int x, int y)
{
	A[x-1][y-1] = A[y-1][x-1] = 1;
}

void Graph::BFS(int x, int required)
{
	Courses Q;
	bool *visited = new bool[n+1];
	int i;
	for(i = 1; i <=n; i++)
	visited[i] = false;
	Q.enqueue(x);
	if(x == required) return;
	visited[x] = true;
	cout<<"BFS starting from vertext "<<x<<": "<<endl;
	while(!Q.isEmpty()){
		int k = Q.dequeue();
		if(k == required){
			cout<<"FOUND HERE"<<endl;
			continue;
		}
		cout<< k << " ";
		for(i = 0; i <= n; i++){
			if(isConnected(k, i) && !visited[i]){
				Q.enqueue(i);
				visited[i] = true;
			}
		}
	}
	cout<<ednl;
	delete [] visited;
}





	

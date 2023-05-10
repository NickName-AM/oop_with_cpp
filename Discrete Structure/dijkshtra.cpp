#include <iostream>
#include <limits.h>
#define V 9

using namespace std;

int minDistVertex(int dist[], bool cvArr[])
{
	int min = INT_MAX, mindex;

	for (int v = 0; v < V; ++v)
		if (!cvArr[v] && dist[v] <= min)
			min = dist[v], mindex = v;

	return mindex;
}

void dijkstra(int graph[V][V], int init)
{
	int dist[V];

	bool cvArr[V];

	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, cvArr[i] = false;

	dist[init] = 0;

	for (int count = 0; count < V - 1; ++count) {

		int u = minDistVertex(dist, cvArr);

		cvArr[u] = true;

		for (int v = 0; v < V; v++)
			if (!cvArr[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	// print the constructed distance array
	cout << "Vertex \t\t Distance from source" << endl;
	for (int i = 0; i < V; i++)
        cout << i << "\t\t\t\t" << dist[i] << endl;
}

int main()
{
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstra(graph, 0);

	return 0;
}

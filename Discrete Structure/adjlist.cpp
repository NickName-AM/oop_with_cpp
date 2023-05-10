#include<iostream>
#define V 9

using namespace std;

int main(){
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    cout << "Vertex\t\tAdjacent Vertices" << endl;

    for(int i = 0; i < V; ++i){
        cout << i << "\t\t";
        for(int j = 0; j < V; ++j){
            if (graph[i][j] > 0)
                cout << j << " ";
        }
        cout << endl;
    }
}
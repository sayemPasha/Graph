/*
Optimized for undirected weighted graph

*/
/*
At a glance:
vertices are like: 0, 1, 2, 3....
digraph/ directed graph is modeled

define the maximum number of node

input format:
5 - number of vertex
3 - number of edge
1 2 edge from 1 to 2
1 3 
2 5

*/

#include <iostream>
#include <vector>

#define MAX 100

int g[MAX][MAX];
int nV;// amount of node/vertex is global
using namespace std;

void createGraph();
bool isAdj(int a, int b);
void remv(int a, int b);
void join(int a, int b);
void displayMatrix();
void init();
void findNeighbour(int v);

int main()
{
	/*ATTENTION: COMMENT OUT BEFORE ANY SUBMISSION
	*/ freopen("in.txt", "r", stdin);
	
	init();
	createGraph();
	displayMatrix();
	findNeighbour(5);
	//init();
	getchar();
	return 0;
}

/*
Initialize the empty adjacency matrix
*/
void init()
{
	for(int i = 0; i < nV; i++){
		for(int j = 0; j < nV; j++){
			g[i][j] = 0;
		}
	}
}

/*
Display the whole status of matrix
*/
void displayMatrix()
{
	cout << endl;
	for(int i = 0 ;i < nV; i++){
		for(int j = 0; j < nV; j++){
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
}

/*
create graph(directed, not weighted) through user prompt
*/
void createGraph()
{
	int u, v, nE;
	cout << "Enter Vertex amount : ", cin >> nV; //global
	cout << "Enter edge amount : ", cin >> nE;

	for(int i = 0; i < nE; i++){
		cout <<"Enter FROM node: ", cin >> u;
		cout <<"Enter TO node: ", cin >> v;

		join(u,v);
	}
}

/*
To insert edge between two nodes
*/
void join(int a, int b)
{
	g[a][b] = 1;
	g[b][a] = 1; // CASE: undirected graph
}

/*
To remove edge from two nodes
*/
void remv(int a, int b)
{
	g[a][b] = 0;
	//g[b][a] // CASE: undirected graph
}

/*
To verify whether two nodes are adjacent or not
*/
bool isAdj(int a, int b)
{
	return ((g[a][b] == 0) ? false : true);
}

/*
display all the neighbour of a vertex
*/
void findNeighbour(int v)
{
	

	cout << "Neighbour of " << v << " : " ;
	for(int i = 0; i < nV; i++){
		
		if( g[v][i] == 1)
			cout << i << ", ";
	}

	cout << endl;
}

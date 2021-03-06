//Optimized for shortest path algorithm
// 15 Aug 2016 | 10:30 pm

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX_NODE 100000

/*
edge list:

	

*/

using namespace std;

struct edge{
	int v,   //neighbour
		w; // weight of the edge
};

//global declaraion

int nV, //total number of vertex
	nE; //total edges

vector <edge> adjList[MAX_NODE];

/*shortest path parent and distance */
vector <int> p,  //parents of the vertex
			 d;  //distance from source
int s = 0;		 //source of the shortest path

void display()
{
	for(int i = 0; i < nV; i++){
		for(int j = 0; j < adjList[i].size(); j++){

			/*u,v,w*/
					cout<< i						//u
				 << ' ' << adjList[i][j].v		    //v
				 << ' ' << adjList[i][j].w << endl; //w
		}
	}

}

void bellman_ford()
{

}

void dijkstra()
{

}

void single_source_init()
{

	p.resize(nV);
	d.resize(nE);
	for(int i =0; i < nV; i++){
		d[i] = INT_MAX;
		p[i] = -1;
	}

	d[0] = s;
}

int main()
{
	int i, j,
		u, //from node
		v, // to node
		w; //weight of the node

	cin >> nV >> nE;
	for(i = 0; i < nV; i++){
		cin >> u >> v >> w;
		
		edge temp;
		temp.v = v; temp.w = w;
		adjList[u].push_back(temp);
	}

	return 0;
}


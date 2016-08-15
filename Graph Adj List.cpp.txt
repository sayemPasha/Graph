/*Weighted Adjacency list
15 Aug 2016 | 8:30 am
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

/*
edge list:

	

*/
#define MAX_NODE 100000

using namespace std;

struct edge{
	int v,   //neighbour
		w; // weight of the edge
};

//global declaraion

int nV, //total number of vertex
	Ne; //total edges

vector <edge> adjList[MAX_NODE];

void display()
{
	for(int i = 0; i < nV; i++){
		for(int j = 0; j < adjList[i].size(); j++){

			/*u,v,w*/
					cout<< i		    //u
				 << ' ' << adjList[i][j].v	    //v
				 << ' ' << adjList[i][j].w << endl; //w
		}
	}

}

int main()
{
	int i, j,
		u, //from node
		v, // to node
		w; //weight of the node

	for(i = 0; i < nV; i++){
		cin >> u >> v >> w;
		
		edge temp;
		temp.v = v; temp.w = w;
		adjList[u].push_back(temp);
	}

	return 0;
}


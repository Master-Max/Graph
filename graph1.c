#include <stdlib.h>
#include <stdio.h>

typedef struct avertex{
	int id;
	int *n[101];
	//struct avertex n[100];
} graph;

int firstAdd = 1;

int adjacent(x,y)
int x,y;
{
	if(x[y]) return 1;
	if(y[x]) return 1;
}

int[] neighors(x)
int x;
{
	
}

int add_vertex(x)
int x;
{
	if(firstAdd){
		graph *g;
		g = calloc(100*sizeof(graph));
		firstAdd=0;	
	}
	if(!g[x]){
		g[x] = x;//make sure this is making a new vertex
		return;
	}
}

int remove_vertex(x)
int x;
{

}

int add_edge(x,y)
int x,y;
{

}

int remove_edge(x,y)
int x,y;
{

}

int main()
{
	graph *g;
	g = calloc(100*sizeof(graph));

	

}

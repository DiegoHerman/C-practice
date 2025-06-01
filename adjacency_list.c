#include <stdio.h>
#include <stdlib.h>

struct node{
    int vertex;
    struct node *next;
};

struct graph {
    int vertices;
    struct node **adjlist;
    int isDirected;
};

struct node *createnode(int vertex) {
    struct node *newnode=malloc(sizeof( struct node));
    newnode->vertex=vertex;
    newnode->next=NULL;
    return newnode;
}

struct graph *creategraph(int vertices, int isDirected) {
    struct graph *graph=malloc(sizeof(struct graph));
    graph->vertices=vertices;
    graph->isDirected=isDirected;
    graph->adjlist=malloc(vertices*sizeof(struct node));
    
    for(int i=0;i<vertices;i++) {
        graph->adjlist[i]=NULL;
    }
    return graph;
}

void addedge(struct graph *graph,int v,int u) {
    struct node *newnode=createnode(u);
    newnode->next=graph->adjlist[v];
    graph->adjlist[v]=newnode;

    if(!graph->isDirected) {
        newnode=createnode(v);
        newnode->next=graph->adjlist[u];
        graph->adjlist[u]=newnode;
    }
}

void displaygraph(struct graph *graph) {
    printf("Vertex: Adjacency list\n");
    for(int j=0;j<graph->vertices;j++){
        struct node *temp=graph->adjlist[j];
        printf("%-5d-->",j);

        while(temp) {
            printf("%d->",temp->vertex);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    struct graph *undirected=creategraph(5,0);
    addedge(undirected,0,1);
    addedge(undirected,0,2);
    addedge(undirected,1,3);
    addedge(undirected,3,4);
    addedge(undirected,2,4);


    printf("adjacency list for undirected graph\n");
    displaygraph(undirected);


    struct graph *directed=creategraph(5,1);
    addedge(directed,0,1);
    addedge(directed,0,2);
    addedge(directed,1,3);
    addedge(directed,3,4);
    addedge(directed,2,4);

     printf("adjacency list for directed graph\n");
    displaygraph(directed);

    return 0;
    
}

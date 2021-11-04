#include <stdio.h>
#include <stdlib.h>


int main()
{
    // create struct vertex
    typedef struct vertex
    {
        int value;
        struct vertex *edges[5];
    }vertex;
    // create graph array
    struct vertex *graph = malloc(sizeof(vertex)*4); // allocate four slots in the memory with the size of a vertex
    // populate the graph
    graph[0].value = 15;
    graph[1].value = 12;
    graph[2].value = 10;
    graph[3].value = 9;
    // add edges to the nodes of the graph
    graph[0].edges[0] = &graph[1];
    graph[0].edges[1] = &graph[2];
    graph[1].edges[0] = &graph[3];
    graph[2].edges[0] = &graph[3];
    graph[3].edges[0] = &graph[0];
    // print the graph
    for (int i=0; i<4; i++){
        printf("%d", graph[i].value);
        for (int j=0; j<5; j++){
            if (graph[i].edges[j] != NULL){
                printf(" -> %d", graph[i].edges[j]->value);
            }
        }
        printf("\n");
    }
    return 0;
}

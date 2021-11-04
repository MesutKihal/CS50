#include <stdio.h>
#include <stdlib.h>


int main()
{
    typedef struct vertex
    {
        int value;
        struct vertex *edges[5];
    }vertex;
    
    void addVertex(int value, struct vertex graph[]){
        for (int i=0; i<5; i++){
            if (graph[i].value == 0){
                graph[i].value = value;
                break;
            }
        }
    }
    void addEdge(struct vertex *a, struct vertex *b){
        for (int i=0; i<5; i++){
            if (a->edges[i] == NULL){
               *a->edges[i] = *b;
               break;
            }
        }
    }
    
    struct vertex *graph = malloc(sizeof(vertex)*5);
    
    addVertex(15, graph);
    addVertex(12, graph);
    addVertex(10, graph);
    addVertex(9, graph);
    addVertex(6, graph);
    

    return 0;
}

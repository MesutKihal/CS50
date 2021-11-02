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
    void addEdge(struct vertex a, struct vertex b){
        for (int i=0; i<5; i++){
            if (a.edges[i] != nullptr){
               a.edges[i] = &b;
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
    addEdge(graph[0], graph[1]);
    addEdge(graph[0], graph[2]);
    addEdge(graph[2], graph[3]);
    addEdge(graph[1], graph[4]);
    addEdge(graph[3], graph[4]);

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d -> %p\n", graph[i].value, graph[i].edges[0]);
        }
    } 
    return 0;
}

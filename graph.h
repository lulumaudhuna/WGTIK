#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define firstEdge(edge) (edge)->firstEdge
#define nil NULL

typedef char infoGraph;
typedef struct elmNode *adrNode;
typedef struct elmEdge *adrEdge;

struct elmNode{
    infoGraph info;
    adrEdge firstEdge;
    adrNode next;
};

struct elmEdge{
    infoGraph info;
    adrEdge next;
};

struct graph{
    adrNode first;
};

adrNode newNode_1301213046(char x);
void addNode_1301213046(adrNode &G, adrNode p);
adrNode findNode_1301213046(adrNode G, char x);
void addEdge_1301213046(adrNode &G, char x, char y);
bool isConnected_1301213046(adrNode G, char x, char y);
void printGraph_1301213046(adrNode G);
#endif // GRAPH_H_INCLUDED

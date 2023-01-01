#include "graph.h"

using namespace std;

int main()
{
    adrNode G;
    char a = 'A', b = 'B', c = 'C', d = 'D';
    adrNode p;
    G = newNode_1301213046(a);
    p = newNode_1301213046(b);
    addNode_1301213046(G,p);
    p = newNode_1301213046(c);
    addNode_1301213046(G,p);
    p = newNode_1301213046(d);
    addNode_1301213046(G,p);

    addEdge_1301213046(G,a,b);

    addEdge_1301213046(G,a,d);
    addEdge_1301213046(G,a,c);
    addEdge_1301213046(G,b,d);
    addEdge_1301213046(G,b,a);
    addEdge_1301213046(G,c,a);
    addEdge_1301213046(G,d,a);
    addEdge_1301213046(G,d,b);
    printGraph_1301213046(G);
}

#include "graph.h"

adrNode newNode_1301213046(char x){
    adrNode N = new elmNode;
    info(N) = x;
    next(N) = nil;
    firstEdge(N) = nil;
    return N;
}

void addNode_1301213046(adrNode &G, adrNode p){ //insert last single linked list
    if(G == nil){ //jika graph masih kosong
        G = p;
    } else {
        adrNode q = G;
        while(next(q) != nil){
            q = next(q);
        }
        next(q) = p;
    }
}

adrNode findNode_1301213046(adrNode G, char x){
    if(G!=nil){ //jika graph ada isinya
        adrNode p = G;
        while(p != nil){
            if(info(p)==x){
                return p;
            }
            p = next(p);
        }
    }
    return nil;
}

void addEdge_1301213046(adrNode &G, char x, char y){
    adrEdge edge = new elmEdge;
    info(edge) = y;
    next(edge) = nil;
    adrNode node = findNode_1301213046(G, x);
    if(firstEdge(node) == nil){
        firstEdge(node) = edge;
    } else {
        next(edge) = firstEdge(node);
        firstEdge(node) = edge;
    }
}

bool isConnected_1301213046(adrNode G, char x, char y){
    adrNode node = findNode_1301213046(G,x);
    adrEdge edge = firstEdge(node);
    while(edge != nil){
        if(info(edge)==y){
            return true;
        }
        edge = next(edge);
    }
    if(edge == nil){
        return false;
    }
}

void printGraph_1301213046(adrNode G){
    adrNode p = G;
    adrEdge edge;
    if(p != nil){
        while(p!=nil){
            edge = firstEdge(p);
            cout << "Node: "<<info(p)<<":";
            while(edge!=nil){
                cout << "-"<<info(edge);
                edge = next(edge);
            }
            cout << endl;
            p = next(p);
        }
    } else {
        cout << "Graph Kosong";
    }
}

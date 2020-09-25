//
// Created by YOPA on 9/24/2020.
//

#include <iostream>
#include <vector>
#include <queue>
#include "bfs.h"

// need Queue
// workflow
// start with the root
// add the child to queue
// pop from the front and digest it then add its child to the queue.
// keep doing this until you dont find any more children

Graph::Graph(int size) {
    m_adjVec.reserve(size);
    m_adjVecSize = size;
}

// A utility function to print the adjacency list
// representation of graph
void Graph::printGraph(int V)
{
    for (int v = 0; v < V; ++v)
    {
        std::cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : m_adjVec[v])
            std::cout << "-> " << x;
        printf("\n");
    }
}

void Graph::addEdge( int u, int v){
    m_adjVec[u].push_back(v);
    m_adjVec[v].push_back(u);
}



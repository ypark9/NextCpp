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

// A utility function to print the adjacency list
// representation of graph
void bfsUtil::printGraph(std::vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        std::cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
            std::cout << "-> " << x;
        printf("\n");
    }
}

void bfsUtil::addEdge(std::vector<int> * adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


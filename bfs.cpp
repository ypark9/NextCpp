//
// Created by YOPA on 9/24/2020.
//

#include <iostream>
#include <vector>
#include <queue>

// need Queue
// workflow
// start with the root
// add the child to queue
// pop from the front and digest it then add its child to the queue.
// keep doing this until you dont find any more children

void addEdge(std::vector<int> * adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


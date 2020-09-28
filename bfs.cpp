//
// Created by YOPA on 9/24/2020.
//

#include <iostream>
#include <vector>
#include "bfs.h"

// need Queue
// workflow
// start with the root
// add the child to queue
// pop from the front and digest it then add its child to the queue.
// keep doing this until you dont find any more children

Graph::Graph(int size) {
    //m_adjVec
    for(auto a = 0; a < size; a++){
        std::vector<int> * vec = new std::vector<int>;
        m_adjVec.push_back(vec);
    }
    m_vecSize = size;
}

// A utility function to print the adjacency list
// representation of graph
void Graph::printGraph(int V)
{
    for (int v = 0; v < V; ++v)
    {
        std::cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : *m_adjVec[v])
            std::cout << "-> " << x;
        printf("\n");
    }
}

void Graph::addEdge(int u, int v){
    m_adjVec[u]->push_back(v);
    m_adjVec[v]->push_back(u);
}

void Graph::bfs() {
    // keep the record what vertex we checked.
    vector<int> record;
    // vector should not be empty
    if(m_adjVec.size() == 0)
        return;
    int root = m_adjVec[0]->at(0);
    //you do things with the current vertex
    std::cout << "We are dealing with " << root <<" " <<std::endl;
    record.push_back(root);
    //find adj items and add them to queue
    for(auto vec : *m_adjVec[root]){
        std::cout << "We put neighbors to queue " << vec <<" " <<std::endl;
        m_q.push(vec);
    }

    do {
        root = m_q.front();
        //you do things with the current vertex
        std::cout << "We are dealing with " << root <<" " <<std::endl;
        m_q.pop();
        record.push_back(root);
        for(auto vec : *m_adjVec[root]){
            std::cout << "We put neighbors to queue " << vec <<" " <<std::endl;
            if(find(record.begin(), record.end(), vec) != record.end())
                m_q.push(vec);
        }
    }while (m_q.size() != 0);
}



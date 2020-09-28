//
// Created by YOPA on 9/24/2020.
//

#ifndef NEXTCPP_BFS_H
#define NEXTCPP_BFS_H

#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    Graph(int size);
    void addEdge(int u, int v);
    void printGraph(int V);
    void bfs();

//functions
private:

// variables
    vector<vector<int> * > m_adjVec;
    int m_vecSize;
    queue<int> m_q;
};

#endif //NEXTCPP_BFS_H

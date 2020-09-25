//
// Created by YOPA on 9/24/2020.
//

#ifndef NEXTCPP_BFS_H
#define NEXTCPP_BFS_H

#include <vector>
using namespace std;

class bfsUtil {
public:
    static void addEdge(std::vector<int> * adj, int u, int v);
    static void printGraph(std::vector<int> adj[], int V);
};

#endif //NEXTCPP_BFS_H

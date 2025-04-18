#include "kruskal.h"
#include <iostream>
#include <fstream>

// using namespace std;

int main() {
    int V = 4; // Amount of vertices

    
    std::vector<Edge> edges = {
        {10, {0, 1}},
        {6, {0, 2}},
        {5, {1, 2}},
        {15, {2, 3}}
    };


    auto result = kruskal(V, edges);


    for (const auto& edge : result)
        std::cout << edge.second.first << " - " << edge.second.second
                  << " : " << edge.first << '\n';

    return 0;
}

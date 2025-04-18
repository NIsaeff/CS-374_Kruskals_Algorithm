#include "kruskal.h"  
#include <iostream>   
#include <fstream>    // read from files

int main() {
    std::ifstream infile("graphs.txt");  // open input file
    if (!infile) {
        std::cerr << "Error opening file.\n";  // raise error if file can't be opened
        return 1;
    }

    int numGraphs;
    infile >> numGraphs;  // read number of graph examples to process

    // loop through each graph example
    for (int g = 0; g < numGraphs; ++g) {
        int V, E;
        infile >> V >> E;  // read number of vertices and edges

        std::vector<Edge> edges;  // contain all edges in current graph

        // read all edges
        for (int i = 0; i < E; ++i) {
            int u, v, w;
            infile >> u >> v >> w;  // read edge from u to v with weight w
            edges.push_back({w, {u, v}});  // store in edges vector
        }

        std::cout << "Graph " << g + 1 << " - MST:\n";  

        auto result = kruskal(V, edges);

        for (const auto& edge : result)
            std::cout << edge.second.first << " - " << edge.second.second
                      << " : " << edge.first << '\n';

        std::cout << "--------------------------\n";  
    }

    return 0;
}

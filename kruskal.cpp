#include "kruskal.h"
#include <algorithm> // std::sort

// using namespace std;


// function to help find the set (representative) of an element using path compression
// maps a "parent node" to its connected nodes as "child nodes"
int find(int parent[], int i) {
    if (parent[i] != i) {
        // path compression -> make all nodes on path from i to root point directly to root
        parent[i] = find(parent, parent[i]);
    }
    return parent[i];
}

// function to return union of two represented subsets
void unionSets(int parent[], int x, int y) {
    // Merge by updating parent
    parent[find(parent, x)] = find(parent, y);
}

// function containing full kruskal's algo
std::vector<Edge> kruskal(int V, std::vector<Edge>& edges) {
    std::vector <Edge> result;
    std::sort(edges.begin(), edges.end());

    int parent[V];
    for (int i = 0; i < V; ++i){
        // initialize each node as own parent (what is a disjoint set?)
        parent[i] = i;
    }

    // iterate through edges, pick edges dont form cycle
    for (const auto& edge : edges) {
        int u = edge.second.first;
        int v = edge.second.second;

        // if u and v are in diff sets, include edge in MST (Minimum Spanning Tree)
        if (find(parent, u) != find(parent, v)) {
            result.push_back(edge);
            unionSets(parent, u, v); // merge sets
        }
    }

    return result; // return MST as list of edges
}

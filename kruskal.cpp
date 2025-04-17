#include "kruskal.h"
#include <algorithm> // std::sort

// using namespace std;


// function to help find the set (representative?) of an element using
// path compression
int find(int parent[], int i) {
    if (parent[i] != i) {
        // TODO: what is path compression?
        parent[i] = find(parent, parent[i]);
    return parent[i]
}

// funtion to return union of two subsets
void unionSets(int parent[], int x, int y) {
    // Merge by updating parent
    parent[find(parent, x)] = find(parent, y);
}

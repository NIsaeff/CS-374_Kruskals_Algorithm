#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <utility>
#include <vector>

// Define Edge as a pair object: (weight, (u,v)), s.t. u and v are vertices
//
using Edge = std::pair<int, std::pair<int, int>>;

// Function declaration for Kruska;s algorithm
// takes
std::vector<Edge> kruskal(int V, std::vector<Edge> &edges);

#endif

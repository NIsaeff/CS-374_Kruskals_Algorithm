# Kruskal’s Algorithm (C++)

This is a simple C++ implementation of **Kruskal's Algorithm** for computing the Minimum Spanning Tree (MST) of a graph.

## 🛠 Build & Run

1. Make sure you have `g++` and `bash` installed.

2. Run the provided script:

```bash
chmod +x run.sh
./run.sh
```

This will:
- Compile the program from `main.cpp` and `kruskal.cpp`
- Run the compiled program using input from `graphs.txt`

## 📄 Input Format (`graphs.txt`)

- First line: number of graphs (e.g. `2`)
- For each graph:
  - Line with `<V> <E>` (vertices and edges)
  - Then `E` lines of `<u> <v> <w>` (edge from u to v with weight w)

### Example:
```
2
4 5
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4
3 3
0 1 1
1 2 2
0 2 3
```

## ✏️ Editing Graphs

- To add/edit graphs, modify `graphs.txt`.
- Ensure the first number matches the number of graphs.
- Vertices are 0-indexed (0 to V-1).


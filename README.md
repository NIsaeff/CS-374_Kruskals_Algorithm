# Kruskal’s Algorithm - C++ Implementation

This project implements **Kruskal’s Algorithm** for finding the **Minimum Spanning Tree (MST)** of a graph. The graph is represented as a collection of edges, and the algorithm uses the **Union-Find** data structure to process the edges in increasing order of weight.

## Table of Contents

1. [Overview](#overview)
2. [Prerequisites](#prerequisites)
3. [Installation](#installation)
4. [Running the Program](#running-the-program)
5. [Providing Input](#providing-input)
6. [Example Output](#example-output)
7. [Editing Examples](#editing-examples)
8. [Troubleshooting](#troubleshooting)
9. [License](#license)

---

## Overview

Kruskal's Algorithm is used to find the **Minimum Spanning Tree (MST)** of a graph, which is a tree that connects all the vertices together with the minimum possible edge weights.

The program is written in **C++**, uses **Union-Find** to keep track of sets of connected vertices, and outputs the edges that make up the MST for each graph.

---

## Prerequisites

To run this project, you need to have the following installed:

- **g++** (GNU Compiler Collection) for compiling C++ programs.
- **bash** shell for running the provided `run.sh` script (or an equivalent terminal).

You can check if you have these installed by running the following commands:

```bash
g++ --version
bash --version
```

---

## Installation

### 1. **Clone the Repository**
   Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/kruskal-algorithm.git
   cd kruskal-algorithm
   ```

### 2. **Set Up Your Files**
   The repository should contain the following files:
   
   - `main.cpp`: Main driver code that reads the input and runs Kruskal’s algorithm.
   - `kruskal.cpp`: Implementation of Kruskal’s algorithm (contains the `kruskal()` function, `find()` and `unionSets()`).
   - `kruskal.h`: Header file with necessary function prototypes and data structures.
   - `graphs.txt`: Sample input file with multiple graphs.
   - `run.sh`: Bash script to compile and run the program.

---

## Running the Program

### 1. **Compile and Run with `run.sh`**

   The `run.sh` script automates the compilation and execution of the program. To use it:

   1. Ensure the script is executable:
      ```bash
      chmod +x run.sh
      ```

   2. Run the script:
      ```bash
      ./run.sh
      ```

   This will:
   - Compile the C++ files into an executable named `kruskal`.
   - Run the program, which will read input from `graphs.txt` and output the MST for each graph.

---

## Providing Input

The program reads input from a text file called `graphs.txt`. The file format is as follows:

### Format for Each Graph:
```
<V> <E>         # Number of vertices (V) and edges (E)
<u1> <v1> <w1>  # Edge from vertex u1 to vertex v1 with weight w1
<u2> <v2> <w2>  # Edge from vertex u2 to vertex v2 with weight w2
...
```

Where:
- `<V>` is the number of vertices.
- `<E>` is the number of edges.
- Each subsequent line represents an edge in the graph with:
  - `<u>`: Starting vertex of the edge.
  - `<v>`: Ending vertex of the edge.
  - `<w>`: Weight of the edge.

### Example:
```
2           # 2 graphs to process
4 5         # Graph 1: 4 vertices, 5 edges
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4

3 3         # Graph 2: 3 vertices, 3 edges
0 1 1
1 2 2
0 2 3
```

### Important Notes:
- The vertices are indexed from `0` to `V-1`.
- The program will process each graph sequentially and output the MST for each.

---

## Example Output

If you run the program with the provided `graphs.txt` example, you should see output similar to this:

```
Graph 1 - MST:
2 - 3 : 4
0 - 3 : 5
0 - 1 : 10
--------------------------
Graph 2 - MST:
0 - 1 : 1
1 - 2 : 2
--------------------------
```

This output shows the edges included in the MST for each graph, along with their weights.

---

## Editing Examples

### 1. **Add/Edit Graphs in `graphs.txt`**
   - To add a new graph, simply follow the format above.
   - Change the number of vertices and edges as needed.
   - Add or modify edges with their respective weights.

### 2. **Example for a New Graph:**
   If you want to add a third graph with 4 vertices and 4 edges:
   ```
   4 4         # Graph 3: 4 vertices, 4 edges
   0 1 5
   1 2 8
   2 3 7
   0 3 9
   ```

### 3. **Multiple Graphs:**
   The first number in the `graphs.txt` file indicates how many graphs to process. If you want to test more than 2 graphs, update this number accordingly.

---

## Troubleshooting

### **Segmentation Fault**
If you encounter a segmentation fault (e.g., during execution), it typically means there's an issue with memory access (like accessing out-of-bounds arrays). Here are some things to check:
- Ensure that the number of vertices in `graphs.txt` matches the indices used in the edges.
- Verify that the `parent[]` array is properly initialized and is of the correct size.

### **Compilation Errors**
If the program doesn’t compile:
- Ensure that your `g++` version is up to date.
- Check for typos or missing semicolons in your C++ files.

You can also try running the program through **GDB** for debugging:
```bash
gdb ./kruskal
run
```
This will give you a stack trace if there’s a crash.

---

## License

This project is open-source and available under the [MIT License](LICENSE).

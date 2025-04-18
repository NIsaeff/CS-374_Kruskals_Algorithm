#!/bin/bash

# Set binary and source files
BINARY="kruskal"
SOURCES="main.cpp kruskal.cpp"

# compile project
echo "Compiling..."
g++ --std=c++17 -Wall -Wextra -o $BINARY $SOURCES

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running..."
    echo "..."
    ./$BINARY
    echo "..."
else
    echo "Compilation failed."
fi

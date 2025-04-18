#!/bin/bash

# -----------------------------
# RUN.SH - Build and Run Script
# For Kruskal's Algorithm Project
# -----------------------------

BINARY="kruskal"
SOURCES="main.cpp kruskal.cpp"

echo "🔧 Starting Build Process..."
echo "🔍 Compiling source files: $SOURCES"

# compile the project
g++ -std=c++17 -Wall -Wextra -o $BINARY $SOURCES

# check if compilation succeeded
# keeping the emojis bc they're cool
if [ $? -eq 0 ]; then
    echo "✅ Compilation successful."
    echo "🚀 Running program with input from 'graphs.txt'..."
    echo "================= OUTPUT ================="

    # Execute the compiled program
    ./$BINARY

    echo "=========================================="
    echo "🏁 Program finished."
else
    echo "❌ Compilation failed. Please fix the errors above."
fi

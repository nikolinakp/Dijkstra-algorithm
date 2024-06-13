# Dijkstra-s-algorithm

1.Algorithm Description

## What is a graph?
A graph, in short, is a set of objects (called "vertices" in the graph) and connections between them (called "edges" in the graph).

## What is Dijkstra's Algorithm?
Dijkstra's algorithm is used to calculate the shortest path from a given vertex to all other vertices of a graph with non-negative edge weights. A graph can be oriented or unoriented. The result of the algorithm's operation is a tree of shortest paths starting at the given vertex.
Dijkstra's algorithm is based on an idea called relaxation: at each moment of the algorithm's operation, information about the shortest path found so far is stored for each vertex; if the algorithm then finds a better path, this information is updated. Therefore, Dijkstra's algorithm and its analogues are widely used in practice, for example, in programs for GPS devices for the purpose of transport optimization.
Dijkstra's algorithm only works if the edge weights are non-negative. Other algorithms have been developed for graphs that have edges with negative weights.
Let the algorithm be applied to the graph G(V, E). The simplest implementation uses an adjacency matrix to represent the graph and a one-dimensional vector to store the d() values. The time and memory complexity is O(|V|^2).
If the graph is represented by neighbor lists and a priority queue is used to find each subsequent vertex, then with a suitable implementation the time complexity is O(E + |V|.log|V|) and the memory complexity is O(|E |+|V|).

